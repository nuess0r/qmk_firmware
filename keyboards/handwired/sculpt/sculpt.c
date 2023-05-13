#include "sculpt.h"
#include "debounce.h"
#include <avr/power.h>

#define DEBOUNCE_DEBUG_ENABLE 0

void keyboard_pre_init_kb(void) {
    keyboard_pre_init_user();

    // The default fuse bit from the factory enables CLKDIV,
    // so enable full frequency in software.
    clock_prescale_set(clock_div_1);

    // Power reduction. Doesn't save much. :(
    PRR0 = 0b10000101;
    PRR1 = 0b00000001;

    // Default the charge pump's EN to off
    PORTB &= ~1;
    DDRB |= 1;

#if LATENCY_MODE_ENABLE
    setPinOutput(LATENCY_MODE_PIN);
#endif

  /* Setting status LEDs pins to output and off */
  setPinOutput(LED_GREEN_PIN);
  setPinOutput(LED_RED_PIN);
  writePinHigh(LED_GREEN_PIN);
  writePinLow(LED_RED_PIN);
}

void keyboard_post_init_kb(void) {
    /* This runs after dip_switch_init. We cannot rely on the internal
     * pull-up on the Fn switch pin because the pull-down is weak at about
     * 47K and the AT90USB's internal pull-up is between 20K and 50K. */
    setPinInput(F4);

    debug_enable = true;

    /* This should generate a 50% duty-cycle PWM on pin 30 of the ribbon
     * where the LEDs and the FN switch are connected.
     * Needed to drive both LEDs */
    backlight_enable();
    backlight_level(194);

    keyboard_post_init_user();
}

bool dip_switch_update_kb(uint8_t index, bool active) {
    switch (index) {
    case 0:
        if (active) {
            layer_off(1);
            writePinHigh(LED_GREEN_PIN);
        } else {
            layer_on(1);
            writePinLow(LED_GREEN_PIN);
        }
    }
    return dip_switch_update_user(index, active);
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
#if LATENCY_MODE_ENABLE
    static int count = 0;
    if (record->event.pressed) {
        ++count;
#ifdef LATENCY_MODE_PIN
        writePinHigh(LATENCY_MODE_PIN);
#endif
    } else {
        --count;
        if (count < 0) {
            count = 0;
        }
        if (count == 0) {
            writePinLow(LATENCY_MODE_PIN);
        }
    }
#endif
#if DEBOUNCE_DEBUG_ENABLE
    const uint8_t both_shifts = MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT);
    switch (keycode) {
    case KC_H:
        if ((get_mods() & both_shifts) == both_shifts) {
            debounce_debug();
            return false;
        }
    }
#endif

    return process_record_user(keycode, record);
}

bool led_update_kb(led_t led_state) {
    if(led_update_user(led_state)) {
        writePin(LED_RED_PIN, led_state.caps_lock);
    }
    return true;
}
