/*
This file is where the keyboard layout is defined against the keyboard's switch matrix.

This file is used to define the matrix for your keyboard. You should define at least one C macro which translates an array into a matrix representing the physical switch matrix for your keyboard. If it's possible to build your keyboard with multiple layouts you should define additional macros.

If you have only a single layout you should call this macro LAYOUT.

When defining multiple layouts you should have a base layout, named LAYOUT_all, that supports all possible switch positions on your matrix, even if that layout is impossible to build physically. This is the macro you should use in your default keymap. You should then have additional keymaps named default_<layout> that use your other layout macros. This will make it easier for people to use the layouts you define.

Layout macro names are entirely lowercase, except for the word LAYOUT at the front.

As an example, if you have a 60% PCB that supports ANSI and ISO you might define the following layouts and keymaps:

Layout Name	Keymap Name	Description
LAYOUT_all	default	A layout that supports both ISO and ANSI
LAYOUT_ansi	default_ansi	An ANSI layout
LAYOUT_iso	default_iso	An ISO layout
?> Providing only LAYOUT_all is invalid - especially when implementing the additional layouts within 3rd party tooling.

*/


#define LAYOUT( \
	          K02, K03, K04,                \
	K10, K11, K12, K13, K14, K15,           \
	K20, K21, K22, K23, K24, K25,           \
	               K33, K34, K35, K36, K37, \
	                                        \
	                                        \
) { \
	{ KC_NO, KC_NO, K02,   K03,   K04,   KC_NO, KC_NO, KC_NO }, \
	{ K10,   K11,   K12,   K13,   K14,   K15,   KC_NO, KC_NO }, \
	{ K20,   K21,   K22,   K23,   K24,   K25,   KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, K33,   K34,   K35,   K36,   K37 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}


/* Base layer
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬
 * │   │   │ W │ E │ R │   │   │   │   │   │   │   |   │   │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼
 * │   │   │ S │ D │ F │ G │   │   │   │   │   │   |   │   │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼
 * │RST│ A │ X │ C │ V │ B │   │   │   │   │   │   |   │   │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼ 
 * │SHT│ PC│SPC│   │SPC│CTL│ALT│DEL│   │   │   │   |   │   │
 * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼ 


    [0] = LAYOUT_wasp(
							KC_W, 		KC_E, 		KC_R, 
	RESET, 		KC_A, 		KC_S, 		KC_D, 		KC_F, 		KC_G, 
	KC_LSFT, 	KC_SPC, 	KC_X, 		KC_C, 		KC_V, 		KC_B, 
							KC_SPC, 				KC_SPC, 	KC_LCTL, 	KC_LALT, 	KC_DEL
    )
};


 */