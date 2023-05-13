#include <print.h>
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
*
* |ESC | F1 | F2 | F3 | F4 | F5 | F6 | f7 | F8 | F9 | F10| F11| F12|PrtS|ScrL|Paus|Calc|
*  -------------------------------------------------------------------------------'
* |  ~ |  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = |Bakspace| Del  |Home|
* --------------------------------------------------------------------------
* | tab  |  q |  w |  e |  r |  t |  y |  u |  i |  o |  p |  [ |  ] |  \   |      |End |
*  -------------------------------------------------------------------------------'
* | caps  |  a |  s |  d |  f |  g |  h |  j |  k |  l |  ; |  ' | Nuhs |enter|Inst|PgUp|
* --------------------------------------------------------------------------------
* |Lsft | Nubs |  z |  x |  c |  v |  b |  n |  m |  , |  . |  / |  Rsft| Up       |PgDn|
* ---------------------------------------------------------------------------------
* |Lctl   |Lgui  |Lalt |       Spc1 | Spc2    |Ralt  | Menu|  Rctl |Left|Down|Rght|
* ---------------------------------------------------------------------------------
*/

  [0] = LAYOUT( \
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,     KC_F12,  KC_PSCREEN, KC_SLCK, KC_PAUSE, KC_CALC, \
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,    KC_EQL,           KC_BSPC, KC_DEL, KC_HOME,  \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,    KC_RBRC,          KC_BSLS, KC_END, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,    KC_NUHS,          KC_ENT,  KC_INS, KC_PGUP, \
    KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,                      KC_RSFT, KC_UP,   KC_PGDN, \
    KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,  SCULPT_RIGHT_SPACE_KEY,           KC_RALT, KC_APP, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT  \
  ),
  [1] = LAYOUT( \
    _______, _______, _______, _______, _______, KC_WWW_SEARCH, KC_WWW_REFRESH, _______, _______, KC_MEDIA_PLAY_PAUSE, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______,          _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______,          _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                      _______, _______, _______, \
    _______, _______, _______,                            _______, _______,                         _______, _______, _______, _______, _______, _______ \
  )
};
