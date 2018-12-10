#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */
    KEYMAP(ESC, F1, F2, F3, F5, F6, F7, F8, F10, F11,F12, PAUS, PSCR, HOME, END, INS, DEL, \
  	       GRV,  1, 2, 3, F4, 6, 7, F9, 0, MINS, EQL, RBRC, BSPC, LNUM, PSLS, PAST, \
           TAB, Q, W, E, 4, 5, 8, 9, O, P, LBRC, QUOT, BSLS, P7, P8, P9, PMNS, \
           LCAP,  A, S, D, R, T, U, I, K, L, SCLN, RSFT, ENT, P4, P5, P6, \
           LSFT,  Z, X, C, F, Y, H, J, COMM, DOT, SLSH, LEFT, UP, P1, P2, P3, PPLS, \
           LCTL,  LGUI, LALT, SPC, V, G, B, N, M, APP, FN0, DOWN, RGHT, P0, PDOT, PENT),

    /* 1: FN 1 */
    KEYMAP(TRNS, MUTE, VOLD, VOLU, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
	         TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
           TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),

};

const action_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1)
};
