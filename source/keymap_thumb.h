#ifndef KEYMAP_H
#define KEYMAP_H

#include <avr/pgmspace.h>
#include "keymap_base.h"

const uint8_t PROGMEM keymap_code[3][17][8] =  {
	{
		// set 1 : normal
		// COL0			COL1		COL2		COL3		COL4		COL5		COL6		COL7
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE },	// ROW0
		//
		{ KEY_Q,		KEY_TAB,	KEY_A,		KEY_NONE,	KEY_Z,		KEY_NONE,	KEY_ESC,	KEY_1 },	// ROW1
		{ KEY_W,		KEY_CAPS,	KEY_S,		KEY_NONE,	KEY_X,		KEY_NONE,	KEY_NONE, 	KEY_2 },	// ROW2
		{ KEY_E,		KEY_Europe1, 	KEY_D,		KEY_NONE, 	KEY_C,		KEY_NONE,	KEY_NONE, 	KEY_3 },	// ROW3
		{ KEY_R,		KEY_T,		KEY_F,		KEY_G,		KEY_V,		KEY_B,		KEY_5,		KEY_4 },	// ROW4
		{ KEY_U,		KEY_Y,		KEY_J,		KEY_H,		KEY_M,		KEY_N,		KEY_6,		KEY_7 },	// ROW5
		{ KEY_I,		KEY_RBR,	KEY_K,		KEY_NONE, 	KEY_COMMA,	KEY_NONE,	KEY_EQUAL,	KEY_8 },	// ROW6
		{ KEY_O,		KEY_NONE, 	KEY_L,		KEY_NONE,	KEY_DOT,	KEY_FN,		KEY_NONE, 	KEY_9 },	// ROW7
		{ KEY_P,		KEY_LBR,	KEY_COLON,	KEY_QUOTE,	KEY_NONE,	KEY_SLASH,	KEY_MINUS,	KEY_0}, 	// ROW8
		{ KEY_LCTRL,	KEY_LSHIFT,	KEY_RCTRL,	KEY_LALT,	KEY_RSHIFT,	KEY_RALT,	KEY_APPS,	KEY_NONE},	// ROW9
		{ KEY_LGUI, 	KEY_HASH,	KEY_BKSLASH,KEY_SPACE,	KEY_ENTER,	KEY_FN,		KEY_BKSP, 	KEY_NONE},	// ROW10
		//
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE }, // ROW11
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE, 	KEY_NONE }, // ROW12
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE }, // ROW13
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE },	// ROW14
		{ KEY_NONE, 	KEY_NONE, 	KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE }, // ROW15
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE }	// ROW16
	},
	
	{	
		// set 2 : FN
		// COL0			COL1		COL2		COL3		COL4		COL5		COL6		COL7
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE },	// ROW0
		//
		{ KEY_Q,		KEY_HASH,	KEY_LEFT,	KEY_NONE,	KEY_Z,		KEY_NONE,	KEY_ESC,	KEY_F1 },	// ROW1
		{ KEY_UP,		KEY_LED,	KEY_DOWN,	KEY_NONE,	KEY_X,		KEY_NONE,	KEY_NONE, 	KEY_F2 },	// ROW2
		{ KEY_E,		KEY_Europe1, 	KEY_RIGHT,	KEY_NONE, 	KEY_C,		KEY_NONE,	KEY_NONE, 	KEY_F3 },	// ROW3
		{ KEY_R,		KEY_T,		KEY_F,		KEY_G,		KEY_V,		KEY_B,		KEY_F5,		KEY_F4 },	// ROW4
		{ KEY_NUMLOCK,		KEY_Y,		KEY_J,		KEY_H,		KEY_M,		KEY_N,		KEY_F6,		KEY_F7 },	// ROW5
		{ KEY_PRNSCR,	KEY_INSERT,	KEY_HOME,	KEY_NONE, 	KEY_END,	KEY_NONE,	KEY_F12,	KEY_F8 },	// ROW6
		{ KEY_SCRLCK,	KEY_NONE, 	KEY_PGUP,	KEY_NONE,	KEY_PGDN,	KEY_FN,	KEY_NONE, 	KEY_F9 },	// ROW7
		{ KEY_PAUSE,	KEY_UP,		KEY_LEFT,	KEY_RIGHT,	KEY_NONE,	KEY_DOWN,	KEY_F11,	KEY_F10}, 	// ROW8
		{ KEY_LCTRL,	KEY_LSHIFT,	KEY_LED_UP,	KEY_LALT,	KEY_RSHIFT,	KEY_LED_DOWN,	KEY_APPS,		KEY_NONE},	// ROW9
		{ KEY_LGUI, 	KEY_HASH,	KEY_BKSLASH,KEY_BEYOND_FN,	KEY_ENTER,	KEY_FN,		KEY_DEL, 	KEY_NONE},	// ROW10
		//
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE }, // ROW11
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE, 	KEY_NONE }, // ROW12
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE }, // ROW13
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE },	// ROW14
		{ KEY_NONE, 	KEY_NONE, 	KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE }, // ROW15
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE }	// ROW16
	},
	
	{	
		// set 3 : BEYOND_FN
		// COL0			COL1		COL2		COL3		COL4		COL5		COL6		COL7
		{ KEY_NONE,		KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE },	// ROW0
		//
		{ KEY_Q,		KEY_TAB,	KEY_A,		KEY_NONE,	KEY_Z,		KEY_NONE,	KEY_ESC,	KEY_1 },	// ROW1
		{ KEY_W,		KEY_CAPS,	KEY_S,		KEY_NONE,	KEY_X,		KEY_NONE,	KEY_NONE, 	KEY_2 },	// ROW2
		{ KEY_E,		KEY_Europe1, 	KEY_D,		KEY_NONE, 	KEY_C,		KEY_NONE,	KEY_NONE, 	KEY_3 },	// ROW3
		{ KEY_R,		KEY_T,		KEY_F,		KEY_G,		KEY_V,		KEY_B,		KEY_5,		KEY_4 },	// ROW4
		{ KEY_U,		KEY_Y,		KEY_J,		KEY_H,		KEY_M,		KEY_N,		KEY_6,		KEY_7 },	// ROW5
		{ KEY_I,		KEY_RBR,	KEY_K,		KEY_NONE, 	KEY_COMMA,	KEY_NONE,	KEY_EQUAL,	KEY_8 },	// ROW6
		{ KEY_O,		KEY_NONE, 	KEY_L,		KEY_NONE,	KEY_DOT,	KEY_DOWN,	KEY_NONE, 	KEY_9 },	// ROW7
		{ KEY_P,		KEY_LBR,	KEY_COLON,	KEY_QUOTE,	KEY_NONE,	KEY_SLASH,	KEY_MINUS,	KEY_0}, 	// ROW8
		{ KEY_LCTRL,	KEY_LSHIFT,	KEY_RIGHT,	KEY_LALT,	KEY_UP,	KEY_LEFT,	KEY_LEFT,		KEY_NONE},	// ROW9
		{ KEY_LGUI, 	KEY_HASH,	KEY_BKSLASH,KEY_SPACE,	KEY_ENTER,	KEY_FN,		KEY_BKSP, 	KEY_NONE},	// ROW10
		//
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE }, // ROW11
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE, 	KEY_NONE }, // ROW12
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE }, // ROW13
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE },	// ROW14
		{ KEY_NONE, 	KEY_NONE, 	KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE }, // ROW15
		{ KEY_NONE, 	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE,	KEY_NONE }	// ROW16
	}
 };

#endif