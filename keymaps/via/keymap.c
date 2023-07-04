// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   A    |   B  |   C  |   D  |   E  |   F  |   G  |           | RIGHT|   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |   H    |   I  |   J  |   K  |   L  |   M  |   N  |           |  L1  |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |   O    |   P  |   Q  |   R  |   S  |   T  |------|           |------|   H  |   J  |   K  |   L  |; / L2|' / Cmd |
 * |--------+------+------+------+------+------|   U  |           | Meh  |------+------+------+------+------+--------|
 * |   W    |   X  |   Y  |   Z  |   1  |   2  |      |           |      |   N  |   M  |   ,  |   .  |//Ctrl| RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | 5    |   6  |   7  |   8  |   9  |                                       |  Up  | Down |   [  |   ]  | ~L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |   1  |  2   |       | Alt  |Ctrl/Esc|
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |  3   |       | PgUp |        |      |
 *                                 |   A  |  B   |------|       |------|  Tab   |Enter |
 *                                 |      |      |  4   |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
    [0] = LAYOUT_ortho_5x10(
        KC_A,   KC_B,   KC_C,  KC_D, KC_E, KC_F, KC_G,                                        KC_A,   KC_B,   KC_C,  KC_D, KC_E, KC_F, KC_G, 
        KC_H,   KC_I,   KC_J,  KC_K, KC_L, KC_M, KC_N,                                        KC_H,   KC_I,   KC_J,  KC_K, KC_L, KC_M, KC_N,
        KC_O,   KC_P,   KC_Q,  KC_R, KC_S, KC_T, KC_U,                                        KC_O,   KC_P,   KC_Q,  KC_R, KC_S, KC_T, KC_U,        
        KC_W,   KC_X,   KC_Y,  KC_Z, KC_1, KC_2,                                              KC_W,   KC_X,   KC_Y,  KC_Z, KC_1, KC_2,  
        KC_5,   KC_6,   KC_7,  KC_8, KC_9,                                                    KC_5,   KC_6,   KC_7,  KC_8, KC_9,  
                                                       KC_A,KC_B,              KC_A,KC_B,
                                                       KC_1, KC_2,KC_3,KC_4,   KC_1, KC_2,KC_3,KC_4
    ),

    [1] = LAYOUT_ortho_5x10(
        KC_A,   KC_B,   KC_C,  KC_D, KC_E, KC_F, KC_G,                                        KC_A,   KC_B,   KC_C,  KC_D, KC_E, KC_F, KC_G, 
        KC_H,   KC_I,   KC_J,  KC_K, KC_L, KC_M, KC_N,                                        KC_H,   KC_I,   KC_J,  KC_K, KC_L, KC_M, KC_N,
        KC_O,   KC_P,   KC_Q,  KC_R, KC_S, KC_T, KC_U,                                        KC_O,   KC_P,   KC_Q,  KC_R, KC_S, KC_T, KC_U,        
        KC_W,   KC_X,   KC_Y,  KC_Z, KC_1, KC_2,                                              KC_W,   KC_X,   KC_Y,  KC_Z, KC_1, KC_2,  
        KC_5,   KC_6,   KC_7,  KC_8, KC_9,                                                    KC_5,   KC_6,   KC_7,  KC_8, KC_9,  
                                                       KC_A,KC_B,              KC_A,KC_B,
                                                       KC_1, KC_2,KC_3,KC_4,   KC_1, KC_2,KC_3,KC_4
    ),

    [2] = LAYOUT_ortho_5x10(
        KC_A,   KC_B,   KC_C,  KC_D, KC_E, KC_F, KC_G,                                        KC_A,   KC_B,   KC_C,  KC_D, KC_E, KC_F, KC_G, 
        KC_H,   KC_I,   KC_J,  KC_K, KC_L, KC_M, KC_N,                                        KC_H,   KC_I,   KC_J,  KC_K, KC_L, KC_M, KC_N,
        KC_O,   KC_P,   KC_Q,  KC_R, KC_S, KC_T, KC_U,                                        KC_O,   KC_P,   KC_Q,  KC_R, KC_S, KC_T, KC_U,        
        KC_W,   KC_X,   KC_Y,  KC_Z, KC_1, KC_2,                                              KC_W,   KC_X,   KC_Y,  KC_Z, KC_1, KC_2,  
        KC_5,   KC_6,   KC_7,  KC_8, KC_9,                                                    KC_5,   KC_6,   KC_7,  KC_8, KC_9,  
                                                       KC_A,KC_B,              KC_A,KC_B,
                                                       KC_1, KC_2,KC_3,KC_4,   KC_1, KC_2,KC_3,KC_4
    ),

    [3] = LAYOUT_ortho_5x10(
        KC_A,   KC_B,   KC_C,  KC_D, KC_E, KC_F, KC_G,                                        KC_A,   KC_B,   KC_C,  KC_D, KC_E, KC_F, KC_G, 
        KC_H,   KC_I,   KC_J,  KC_K, KC_L, KC_M, KC_N,                                        KC_H,   KC_I,   KC_J,  KC_K, KC_L, KC_M, KC_N,
        KC_O,   KC_P,   KC_Q,  KC_R, KC_S, KC_T, KC_U,                                        KC_O,   KC_P,   KC_Q,  KC_R, KC_S, KC_T, KC_U,        
        KC_W,   KC_X,   KC_Y,  KC_Z, KC_1, KC_2,                                              KC_W,   KC_X,   KC_Y,  KC_Z, KC_1, KC_2,  
        KC_5,   KC_6,   KC_7,  KC_8, KC_9,                                                    KC_5,   KC_6,   KC_7,  KC_8, KC_9,  
                                                       KC_A,KC_B,              KC_A,KC_B,
                                                       KC_1, KC_2,KC_3,KC_4,   KC_1, KC_2,KC_3,KC_4
    ),

    [4] = LAYOUT_ortho_5x10(
        KC_A,   KC_B,   KC_C,  KC_D, KC_E, KC_F, KC_G,                                        KC_A,   KC_B,   KC_C,  KC_D, KC_E, KC_F, KC_G, 
        KC_H,   KC_I,   KC_J,  KC_K, KC_L, KC_M, KC_N,                                        KC_H,   KC_I,   KC_J,  KC_K, KC_L, KC_M, KC_N,
        KC_O,   KC_P,   KC_Q,  KC_R, KC_S, KC_T, KC_U,                                        KC_O,   KC_P,   KC_Q,  KC_R, KC_S, KC_T, KC_U,        
        KC_W,   KC_X,   KC_Y,  KC_Z, KC_1, KC_2,                                              KC_W,   KC_X,   KC_Y,  KC_Z, KC_1, KC_2,  
        KC_5,   KC_6,   KC_7,  KC_8, KC_9,                                                    KC_5,   KC_6,   KC_7,  KC_8, KC_9,  
                                                       KC_A,KC_B,              KC_A,KC_B,
                                                       KC_1, KC_2,KC_3,KC_4,   KC_1, KC_2,KC_3,KC_4
    )
};

