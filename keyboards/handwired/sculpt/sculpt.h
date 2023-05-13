#ifndef MICROSOFT_SCULPT_H
#define MICROSOFT_SCULPT_H

#include "quantum.h"

#define LAYOUT( \
    k4D, k7C, k7B, k1B, k4B, k1A, k1F, k79, k77, k75, k78, k73, k13, k71, k31, k01, k23, \
    k7D, k0D, k0C, k2D, k1D, k7A, k7F, k09, k07, k05, k04, k15, k74, k08, k03, k21, \
    k0A, k0B, k1C, k2B, k2A, k2F, k19, k29, k27, k25, k24, k14, k17, k38, k51, \
    k2C, k3D, k4C, k3B, k3A, k4A, k49, k39, k37, k35, k34, k45, k65, k33, k18, k11, \
    k5E, k6C, k5D, k5C, k5B, k5A, k6A, k69, k59, k57, k55, k44, k52, k63, k53, \
    k6H, k3F, k4G, k6B, k68, k46, k43, k60, k48, k64, k61 \
) \
{ \
    {KC_NO, KC_NO, KC_NO, k60,   KC_NO, KC_NO, KC_NO, KC_NO, }, \
    {k31,   KC_NO, k51,   k61,   k71,   k01,   k11,   k21,   }, \
    {KC_NO, KC_NO, k52,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    {k33,   k43,   k53,   k63,   k73,   k03,   k13,   k23,   }, \
    {k34,   k44,   k65,   k64,   k74,   k04,   k14,   k24,   }, \
    {k35,   k45,   k55,   KC_NO, k75,   k05,   k15,   k25,   }, \
    {KC_NO, k46,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    {k37,   KC_NO, k57,   KC_NO, k77,   k07,   k17,   k27,   }, \
    {k38,   k48,   KC_NO, k68,   k78,   k08,   k18,   KC_NO, }, \
    {k39,   k49,   k59,   k69,   k79,   k09,   k19,   k29,   }, \
    {k3A,   k4A,   k5A,   k6A,   k7A,   k0A,   k1A,   k2A,   }, \
    {k3B,   k4B,   k5B,   k6B,   k7B,   k0B,   k1B,   k2B,   }, \
    {k6C,   k4C,   k5C,   KC_NO, k7C,   k0C,   k1C,   k2C,   }, \
    {k3D,   k4D,   k5D,   KC_NO, k7D,   k0D,   k1D,   k2D,   }, \
    {KC_NO, KC_NO, k5E,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    {k3F,   KC_NO, KC_NO, KC_NO, k7F,   KC_NO, k1F,   k2F,   }, \
    {KC_NO, k4G,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, }, \
    {KC_NO, KC_NO, KC_NO, k6H,   KC_NO, KC_NO, KC_NO, KC_NO, }, \
}
#endif
