/* Copyright 2019
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


#define LAYOUT( \
	          K02, K03, K04,                \
	K10, K11, K12, K13, K14, K15,           \
	K20, K21, K22, K23, K24, K25,           \
	               K33, K34, K35, K36, K37 \
)  { \
	{ KC_NO, KC_NO, K02,   K03,   K04,   KC_NO, KC_NO, KC_NO }, \
	{ K10,   K11,   K12,   K13,   K14,   K15,   KC_NO, KC_NO }, \
	{ K20,   K21,   K22,   K23,   K24,   K25,   KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, K33,   K34,   K35,   K36,   K37 }, \
}


