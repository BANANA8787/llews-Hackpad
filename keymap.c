// Copyright 2023 Nico Stuhlmueller (@ThePurox)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define ENCODER_BUTTON_PIN GP8

#define ENCODER_BUTTON_DEBOUNCE 20


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*         ┌───┐
     *         │VOL│
     * ┌───┬───┼───┤
     * │ 7 │ 8 │ 9 │
     * ├───┼───┼───┤
     * │ 4 │ 5 │ 6 │
     * ├───┼───┼───┤
     * │ 1 │ 2 │ 3 │
     * └───┴───┴───┘
     * 
     */
    [0] = LAYOUT(
        KC_KP_7, KC_KP_8,   KC_KP_9, 
        KC_KP_4, KC_KP_5,   KC_KP_6,
        KC_KP_1, KC_KP_2,   KC_KP_3
    )
};
