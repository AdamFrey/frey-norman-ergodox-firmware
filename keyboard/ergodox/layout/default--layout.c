/* ----------------------------------------------------------------------------
* ergoDOX layout : QWERTY (modified from the Kinesis layout)
* -----------------------------------------------------------------------------
* Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
* Released under The MIT License (MIT) (see "license.md")
* Project located at <https://github.com/benblazak/ergodox-firmware>
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}

// DEFINITIONS ----------------------------------------------------------------
#define  kprrel   &kbfun_press_release
#define  ktog     &kbfun_toggle
#define  ktrans   &kbfun_transparent
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lpush5   &kbfun_layer_push_5
#define  lpush6   &kbfun_layer_push_6
#define  lpush7   &kbfun_layer_push_7
#define  lpush8   &kbfun_layer_push_8
#define  lpush9   &kbfun_layer_push_9
#define  lpush10  &kbfun_layer_push_10
#define  lpop     &kbfun_layer_pop_all
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  lpop5    &kbfun_layer_pop_5
#define  lpop6    &kbfun_layer_pop_6
#define  lpop7    &kbfun_layer_pop_7
#define  lpop8    &kbfun_layer_pop_8
#define  lpop9    &kbfun_layer_pop_9
#define  lpop10   &kbfun_layer_pop_10
#define  dbtldr   &kbfun_jump_to_bootloader
#define  sshprre  &kbfun_shift_press_release
#define  s2kcap   &kbfun_2_keys_capslock_press_release
#define  slpunum  &kbfun_layer_push_numpad
#define  slponum  &kbfun_layer_pop_numpad
// ----------------------------------------------------------------------------

// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  KEY_Escape,	KEY_1_Exclamation,	KEY_2_At,	KEY_3_Pound,	KEY_4_Dollar,	KEY_5_Percent,	0,
  KEY_Tab,	KEY_q_Q,	KEY_w_W,	KEY_d_D,	KEY_f_F,	KEY_m_M,	KEY_Equal_Plus,
  KEY_LeftControl,	KEY_a_A,	KEY_s_S,	KEY_e_E,	KEY_t_T,	KEY_g_G,
  KEY_LeftShift,	KEY_z_Z,	KEY_x_X,	KEY_c_C,	KEY_v_V,	KEY_b_B,	KEY_Equal_Plus,
  KEY_LeftAlt,	KEY_LeftControl,	KEY_LeftGUI,	KEY_LeftArrow,	KEY_RightArrow,
  KEY_PageDown,	KEY_PageUp,
  0,	0,	KEY_End,
  KEY_DeleteBackspace,	KEY_LeftAlt,	2,
  // right hand
  0,	KEY_6_Caret,	KEY_7_Ampersand,	KEY_8_Asterisk,	KEY_9_LeftParenthesis,	KEY_0_RightParenthesis,	KEY_GraveAccent_Tilde,
  KEY_Dash_Underscore,	KEY_y_Y,	KEY_u_U,	KEY_r_R,	KEY_p_P,	KEY_Semicolon_Colon,	KEY_Backslash_Pipe,
  KEY_l_L,	KEY_n_N,	KEY_i_I,	KEY_o_O,	KEY_h_H,	KEY_SingleQuote_DoubleQuote,
  KEY_Dash_Underscore,	KEY_Comma_LessThan,	KEY_j_J,	KEY_k_K,	KEY_Period_GreaterThan,	KEY_Slash_Question,	KEY_RightShift,
  KEY_DownArrow,	KEY_UpArrow,	KEY_RightGUI,	KEY_RightControl,	KEY_RightAlt,
  KEY_VolumeDown,	KEY_VolumeUp,
  KEY_Home,	0,	0,
  1,	KEY_ReturnEnter,	KEY_Spacebar
),
// LAYER 1
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  0,	KEY_F1,	KEY_F2,	KEY_F3,	KEY_F4,	KEY_F5,	KEY_F11,
  KEY_Tab,	0,	0,	KEY_4_Dollar,	KEY_1_Exclamation,	KEY_3_Pound,	KEY_Equal_Plus,
  KEY_LeftControl,	KEY_LeftBracket_LeftBrace,	KEY_LeftBracket_LeftBrace,	KEY_9_LeftParenthesis,	KEY_SingleQuote_DoubleQuote,	KEY_Comma_LessThan,
  KEY_LeftShift,	0,	0,	0,	KEY_2_At,	0,	KEY_Equal_Plus,
  KEY_LeftGUI,	KEY_LeftControl,	0,	KEY_LeftArrow,	KEY_RightArrow,
  0,	0,
  0,	0,	0,
  KEY_DeleteBackspace,	KEY_Escape,	0,
  // right hand
  KEY_F12,	KEY_F6,	KEY_F7,	KEY_F8,	KEY_F9,	KEY_F10,	0,
  KEY_Dash_Underscore,	KEY_6_Caret,	KEY_5_Percent,	KEY_8_Asterisk,	0,	KEY_Semicolon_Colon,	KEY_Backslash_Pipe,
  KEY_Period_GreaterThan,	0x34,	KEY_0_RightParenthesis,	KEY_RightBracket_RightBrace,	KEY_RightBracket_RightBrace,	KEY_SingleQuote_DoubleQuote,
  KEY_Dash_Underscore,	KEY_Comma_LessThan,	KEY_7_Ampersand,	0,	KEY_Period_GreaterThan,	KEY_Slash_Question,	KEY_RightShift,
  KEY_DownArrow,	KEY_UpArrow,	0,	KEY_RightControl,	KEY_RightGUI,
  0,	0,
  0,	0,	0,
  0,	KEY_ReturnEnter,	KEY_Spacebar
),
// LAYER 2
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	KEY_9_LeftParenthesis,	0,	0,	KEY_Equal_Plus,
  KEY_LeftControl,	KEY_1_Exclamation,	KEY_2_At,	KEY_3_Pound,	KEY_4_Dollar,	KEY_5_Percent,
  KEY_LeftShift,	0,	0,	0,	0,	0,	KEY_Equal_Plus,
  KEY_LeftGUI,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  KEY_DeleteBackspace,	KEY_Escape,	0,
  // right hand
  0,	0,	0,	0,	0,	0,	0,
  KEY_Dash_Underscore,	0,	0,	KEY_0_RightParenthesis,	0,	0,	KEY_Backslash_Pipe,
  KEY_6_Caret,	KEY_7_Ampersand,	KEY_8_Asterisk,	KEY_9_LeftParenthesis,	KEY_0_RightParenthesis,	KEY_SingleQuote_DoubleQuote,
  KEY_Dash_Underscore,	KEY_Comma_LessThan,	0,	0,	KEY_Period_GreaterThan,	KEY_Slash_Question,	KEY_RightShift,
  0,	0,	0,	KEY_RightControl,	KEY_RightGUI,
  0,	0,
  0,	0,	0,
  0,	KEY_ReturnEnter,	KEY_Spacebar
),
// LAYER 3
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0,
  // right hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0
),
// LAYER 4
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0,
  // right hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0
),
// LAYER 5
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0,
  // right hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0
),
// LAYER 6
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0,
  // right hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0
),
// LAYER 7
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0,
  // right hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0
),
// LAYER 8
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0,
  // right hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0
),
// LAYER 9
KB_MATRIX_LAYER(
  // unused
  0,
  // left hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0,
  // right hand
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,	0,	0,
  0,	0,	0,	0,	0,
  0,	0,
  0,	0,	0,
  0,	0,	0
),
};
// ----------------------------------------------------------------------------

// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,
  NULL,	NULL,	kprrel,
  kprrel,	kprrel,	lpush2,
  // right hand
  NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,
  kprrel,	NULL,	NULL,
  lpush1,	kprrel,	kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  dbtldr,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	NULL,	NULL,	sshprre,	sshprre,	sshprre,	sshprre,
  kprrel,	sshprre,	kprrel,	sshprre, sshprre,	sshprre,
  kprrel,	NULL,	NULL,	NULL,	sshprre,	NULL,	kprrel,
  kprrel,	kprrel,	NULL,	kprrel,	kprrel,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  kprrel,	kprrel,	NULL,
  // right hand
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
  kprrel,	sshprre,	sshprre,	sshprre,	NULL,	sshprre,	sshprre,
  sshprre,	sshprre,	sshprre,	kprrel,	sshprre,	kprrel,
  sshprre,	kprrel,	sshprre,	NULL,	kprrel,	sshprre,	kprrel,
  kprrel,	kprrel,	NULL,	kprrel,	kprrel,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	kprrel,	kprrel
),
// LAYER 2
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  dbtldr,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	kprrel,	NULL,	NULL,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	NULL,	NULL,	NULL,	NULL,	NULL,	kprrel,
  kprrel,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  kprrel,	kprrel,	lpop,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  kprrel,	NULL,	NULL,	kprrel,	NULL,	NULL,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	NULL,	NULL,	kprrel,	kprrel,	kprrel,
  NULL,	NULL,	NULL,	kprrel,	kprrel,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	kprrel,	kprrel
),
// LAYER 3
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
// LAYER 4
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
// LAYER 5
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
// LAYER 6
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
// LAYER 7
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
// LAYER 8
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
// LAYER 9
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
};
// ----------------------------------------------------------------------------

// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,
  NULL,	NULL,	kprrel,
  kprrel,	kprrel,	lpop2,
  // right hand
  NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,
  kprrel,	NULL,	NULL,
  lpop1,	kprrel,	kprrel
),
// LAYER 1
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	NULL,	NULL,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	NULL,	NULL,	NULL,	kprrel,	NULL,	kprrel,
  kprrel,	kprrel,	NULL,	kprrel,	kprrel,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  kprrel,	kprrel,	NULL,
  // right hand
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	NULL,
  kprrel,	kprrel,	kprrel,	kprrel,	NULL,	kprrel,	kprrel,
  kprrel,	sshprre,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	kprrel,	NULL,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	NULL,	kprrel,	kprrel,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	kprrel,	kprrel
),
// LAYER 2
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	kprrel,	NULL,	NULL,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	NULL,	NULL,	NULL,	NULL,	NULL,	kprrel,
  kprrel,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  kprrel,	kprrel,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  kprrel,	NULL,	NULL,	kprrel,	NULL,	NULL,	kprrel,
  kprrel,	kprrel,	kprrel,	kprrel,	kprrel,	kprrel,
  kprrel,	kprrel,	NULL,	NULL,	kprrel,	kprrel,	kprrel,
  NULL,	NULL,	NULL,	kprrel,	kprrel,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	kprrel,	kprrel
),
// LAYER 3
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
// LAYER 4
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
// LAYER 5
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
// LAYER 6
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
// LAYER 7
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
// LAYER 8
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
// LAYER 9
KB_MATRIX_LAYER(
  // unused
  NULL,
  // left hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,
  // right hand
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,	NULL,	NULL,	NULL,
  NULL,	NULL,
  NULL,	NULL,	NULL,
  NULL,	NULL,	NULL
),
};
// ----------------------------------------------------------------------------
