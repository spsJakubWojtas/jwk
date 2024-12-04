// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        /*
        Q   W   F   P   G   J   L   U   Y   BACKSPACE
        A   R   S   T   D   H   N   E   I   O
        Z   X   C   V   B   K   M   L1  L2  SHIFT
                        SPACE
        
        * Only resembles the colemak layout, 
          can be changed on monkytype via emulating the desired layout ( dvorak, qwerty, workman ... )

        */
        KC_Q,   KC_W,   KC_F,   KC_P,   KC_G,   KC_J,   KC_L,   KC_U,   KC_Y,   KC_BSPC,
        KC_A,   KC_R,   KC_S,   KC_T,   KC_D,   KC_H,   KC_N,   KC_E,   KC_I,   KC_O,
        KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_K,   KC_M,   MO(1),  TO(2),  KC_LSFT,
                                        KC_SPC
    ),

    [1] = LAYOUT(
        /*
        ESC !   @   #   $   %   ^   &   *   BACKSPACE
        TAB -   +   ;   '   (   )   [   ]   ENTER
        CTR \   ,   .   /  ALT  _   L1  L2  _
                        SPACE     
        *This layer is for special characters than might be used in programming
        * _ means that this key does nothing

        */
        KC_ESC,    KC_EXLM,   KC_AT,     KC_HASH,   KC_DLR,    KC_PERC,   KC_CIRC,   KC_AMPR,   KC_ASTR,   KC_BSPC,
        KC_TAB,    KC_MINS,   KC_EQL,    KC_SCLN,   KC_QUOT,   KC_LPRN,   KC_RPRN,   KC_LBRC,   KC_RBRC,   KC_ENT,
        KC_LCTL,   KC_BSLS,   KC_COMMA,  KC_DOT,    KC_SLSH,   KC_LALT,   KC_NO,     MO(1),     TO(2),     KC_NO,
                                                    KC_SPC
    ),

    [2] = LAYOUT(
        /*
        ESC 7   8   9   _   _   _   UP  _   BACKSPACE
        TAB 4   5   6   _   _  LFT  DWN RGT ENTER
        CTL 1   2   3   _   _   _   _   L0  _

        *This is a navigation layer wiht keys such as arrow keys and numpad
        *Numpad currently doesn't work

        */
        KC_ESC,    KC_P7,     KC_P8,      KC_P9,    KC_NO,     KC_NO,     KC_NO,     KC_UP,     KC_NO,     KC_BSPC,
        KC_TAB,    KC_P4,     KC_P5,      KC_P6,    KC_NO,     KC_NO,     KC_LEFT,   KC_DOWN,   KC_RGHT,   KC_ENT,
        KC_LCTL,   KC_P1,     KC_P2,      KC_P3,    KC_NO,     KC_NO,     KC_NO,     KC_NO,     TO(0),     KC_NO,
                                                    KC_SPC
    )
};
