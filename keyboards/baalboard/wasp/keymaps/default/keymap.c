#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_all(
	          KC_W,     KC_E,     KC_R, 
	RESET,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G, 
	KC_LSFT,  KC_SPC,   KC_X,     KC_C,     KC_V,     KC_B, 
	KC_SPC,   KC_SPC,   KC_LCTL,  KC_LALT,  KC_DEL
    )
};



