#include QMK_KEYBOARD_H

#include "keymap_german.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTZ 0
#define _FNQ    1
#define _DVORAK 2
#define _FND    3

#define MO_FN MO(_FNQ)
#define MO_FD MO(_FND)

#define TG_DV TG(_DVORAK)

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTZ] = LAYOUT(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,  KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BSLS, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,   TG_DV, \
    MO_FN,   KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,           KC_ENT,  _______, KC_RALT, MO_FN,   KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_FNQ] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_DEL, \
    _______, _______, _______, _______, _______, _______, _______, _______,   KC_UP, _______, _______, _______, _______, _______, \
    _______, DE_AE,   _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______,\
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_TILD, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______
  ),

  [_DVORAK] = LAYOUT(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    DE_PLUS, DE_LESS,KC_DEL,  KC_BSPC, \
    KC_TAB,  DE_UE,   KC_COMM,  KC_DOT, KC_P,    DE_Y,    KC_F,    KC_G,    KC_C,    KC_T,    DE_Z,    DE_SS,   DE_QST, KC_BSLS, \
    KC_LCTL, KC_A,    KC_O,    KC_E,    KC_I,    KC_U,    KC_H,    KC_D,    KC_R,    KC_N,    KC_S,    KC_L,    DE_MINS, \
    KC_LSFT, DE_OE,   KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    DE_HASH, KC_UP,   TG_DV, \
    MO_FD,   KC_LCTL, KC_LALT, KC_LGUI, KC_SPC,           KC_ENT,  _______, KC_RALT, MO_FN,   KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_FND] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_DEL, \
    _______, _______, _______, _______, _______, _______, _______, _______,   KC_UP, _______, _______, _______, _______, _______, \
    _______, DE_AE,   _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______,\
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_TILD, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______
  ),
};
