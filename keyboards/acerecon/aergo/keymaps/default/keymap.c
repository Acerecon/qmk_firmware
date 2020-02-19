/* Copyright 2019 Acerecon
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// #define LT1_SPC     LT(1, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/*
	Layout

	K00, K01, K02, K03, K04, K05,                 K08, K09, K0A, K0B, K0C, K0D, \
	K10, K11, K12, K13, K14, K15, K16,       K17, K18, K19, K1A, K1B, K1C, K1D, \
	K20, K21, K22, K23, K24, K25, K26,       K27, K28, K29, K2A, K2B, K2C, K2D, \
	K30, K31, K32, K33, K34, K35, K36,       K37, K38, K39, K3A, K3B, K3C, K3D, \
	K40, K41, K42, K43, K44, K45,                 K48, K49, K4A, K4B, K4C, K4D, \
	K50, 		   K53,      K55,                 K58, K59, K5A,           K5D, \ 

	*/

  // Default layer
	[0] = LAYOUT(
		          KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,               KC_F7, KC_F8, KC_F9,   KC_F10,  KC_F11,  KC_F12,
		KC_ESC,   KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,                KC_7,  KC_8,  KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
		KC_TAB,   KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_BSPC,    KC_PGUP, KC_Y,  KC_U,  KC_I,    KC_O,    KC_P,    KC_DEL,
		KC_LCTRL, KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_DEL,     KC_PGDN, KC_H,  KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
		KC_LSFT,  KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,                       KC_N,  KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
		KC_LGUI, 		     KC_LALT,       KC_SPC,             MO(1),    KC_ENT,     MO(2),                      KC_RCTRL
    ),

    // FN1 Layer
    [1] = LAYOUT(
		          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,           KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BSPC,
		KC_TRNS,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_TRNS,    KC_TRNS,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_TRNS,
		KC_CAPSLOCK, KC_1,  KC_2,     KC_3,     KC_4,     KC_5,     KC_TRNS,    KC_TRNS,  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_GRAVE,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_SPC,   KC_TRNS,                        KC_LBRC,  KC_RBRC,  KC_MINS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
		KC_TRNS, 		       KC_TRNS,       KC_TRNS,                        KC_TRNS,    KC_TRNS,    KC_TRNS,                               KC_TRNS
    ),

    //FN2 Layer
    [2] = LAYOUT(
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RESET, KC_TRNS,                      KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BSPC,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_UP,    KC_TRNS,  KC_TRNS,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_TRNS,
		KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
		KC_TRNS, 		       KC_TRNS,       KC_TRNS,                        KC_TRNS,    KC_TRNS,  KC_TRNS,                                KC_TRNS
    )
};
