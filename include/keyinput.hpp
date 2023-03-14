#ifndef KEYINPUT_HPP
#define KEYINPUT_HPP

#include<string>
#include<vector>
#include<conio.h>

enum {
	// MISC KEYS
	KEY_BACKSPACE	= 8,
	KEY_ENTER 		= 13,
	KEY_ESCAPE 		= 27,
	KEY_SPACE		= 32,
	KEY_DELETE		= 127,
	KEY_NBSP		= 255,

	// NUMBER KEYS
	KEY_ZERO 	= 48,
	KEY_ONE 	= 49,
	KEY_TWO		= 50,
	KEY_THREE	= 51,
	KEY_FOUR	= 52,
	KEY_FIVE	= 53,
	KEY_SIX		= 54,
	KEY_SEVEN	= 55,
	KEY_EIGHT 	= 56,
	KEY_NINE	= 57,

	// UPPERCASE LETTER KEYS
	KEY_BIG_A = 65,
	KEY_BIG_B = 66,
	KEY_BIG_C = 67,
	KEY_BIG_D = 68,
	KEY_BIG_E = 69,
	KEY_BIG_F = 70,
	KEY_BIG_G = 71,
	KEY_BIG_H = 72,
	KEY_BIG_I = 73,
	KEY_BIG_J = 74,
	KEY_BIG_K = 75,
	KEY_BIG_L = 76,
	KEY_BIG_M = 77,
	KEY_BIG_N = 78,
	KEY_BIG_O = 79,
	KEY_BIG_P = 80,
	KEY_BIG_Q = 81,
	KEY_BIG_R = 82,
	KEY_BIG_S = 83,
	KEY_BIG_T = 84,
	KEY_BIG_U = 85,
	KEY_BIG_V = 86,
	KEY_BIG_W = 87,
	KEY_BIG_X = 88,
	KEY_BIG_Y = 89,
	KEY_BIG_Z = 90,

	// DEFAULT LETTER KEYS
	KEY_A = 97,
	KEY_B = 98,
	KEY_C = 99,
	KEY_D = 100,
	KEY_E = 101,
	KEY_F = 102,
	KEY_G = 103,
	KEY_H = 104,
	KEY_I = 105,
	KEY_J = 106,
	KEY_K = 107,
	KEY_L = 108,
	KEY_M = 109,
	KEY_N = 110,
	KEY_O = 111,
	KEY_P = 112,
	KEY_Q = 113,
	KEY_R = 114,
	KEY_S = 115,
	KEY_T = 116,
	KEY_U = 117,
	KEY_V = 118,
	KEY_W = 119,
	KEY_X = 120,
	KEY_Y = 121,
	KEY_Z = 122,

	// SYMBOL KEYS
	KEY_EXCLAMATION_POINT	= 33,
	KEY_QUOTATION_MARK		= 34,
	KEY_POUND_SIGN			= 35,
	KEY_DOLLAR_SIGN			= 36,
	KEY_PERCENTAGE_SIGN		= 37,
	KEY_AMPERSAND_SIGN		= 38,
	KEY_APOSTROPHE			= 39,
	KEY_COMMA				= 44,
	KEY_HYPHEN				= 45,
	KEY_PERIOD				= 46,
	KEY_COLON				= 58,
	KEY_SEMICOLON			= 59,
	KEY_LESS_THAN			= 60,
	KEY_EQUAL				= 61,
	KEY_GREAT_THAN			= 62,
	KEY_QUESTION_MARK		= 63,
	KEY_AT					= 64,
	KEY_CARET				= 94,
	KEY_UNDERSCORE			= 95,
	KEY_GRAVE				= 96,
	KEY_TILDE				= 126,

	// SYMBOLS (BRACKETS)
	KEY_OPEN_PARENTHESIS	= 40,
	KEY_CLOSE_PARENTHESIS	= 41,
	KEY_OPEN_SQUAREBRACKET	= 91,
	KEY_CLOSE_SQUAREBRACKET	= 93,
	KEY_OPEN_CURLYBRACKET	= 123,
	KEY_CLOSE_CURLYBRACKET	= 125,

	// SYMBOLS (MISC)
	KEY_FORWARD_SLASH	= 47,
	KEY_BACKWARD_SLASH	= 92,
	KEY_VERTICAL_BAR	= 124
};

const std::vector<std::pair<std::string, int>> KEYMAP = {
	{ 	"enter",		KEY_ENTER 		},	{ "a", KEY_A },	{ "m", KEY_M },	{ "y", KEY_Y },	{ "A", KEY_BIG_A },	{ "M", KEY_BIG_M },	{ "Y", KEY_BIG_Y },
	{ 	"escape",		KEY_ESCAPE 		},	{ "b", KEY_B },	{ "n", KEY_N },	{ "z", KEY_Z },	{ "B", KEY_BIG_B },	{ "N", KEY_BIG_N },	{ "Z", KEY_BIG_Z },
	{ 	"num_zero",		KEY_ZERO 		},	{ "c", KEY_C },	{ "o", KEY_O },					{ "C", KEY_BIG_C },	{ "O", KEY_BIG_O },
	{ 	"num_one", 		KEY_ONE 		},	{ "d", KEY_D },	{ "p", KEY_P },					{ "D", KEY_BIG_D },	{ "P", KEY_BIG_P },
	{ 	"num_two", 		KEY_TWO 		},	{ "e", KEY_E },	{ "q", KEY_Q },					{ "E", KEY_BIG_E },	{ "Q", KEY_BIG_Q },
	{ 	"num_three", 	KEY_THREE 		},	{ "f", KEY_F },	{ "r", KEY_R },					{ "F", KEY_BIG_F },	{ "R", KEY_BIG_R },
	{ 	"num_four", 	KEY_FOUR 		},	{ "g", KEY_G },	{ "s", KEY_S },					{ "G", KEY_BIG_G },	{ "S", KEY_BIG_S },
	{ 	"num_five", 	KEY_FIVE 		},	{ "h", KEY_H },	{ "t", KEY_T },					{ "H", KEY_BIG_H },	{ "T", KEY_BIG_T },
	{ 	"num_six", 		KEY_SIX 		},	{ "i", KEY_I },	{ "u", KEY_U },					{ "I", KEY_BIG_I },	{ "U", KEY_BIG_U },
	{ 	"num_seven", 	KEY_SEVEN 		},	{ "j", KEY_J },	{ "v", KEY_V },					{ "J", KEY_BIG_J },	{ "V", KEY_BIG_V },
	{ 	"num_eight", 	KEY_EIGHT 		},	{ "k", KEY_K },	{ "w", KEY_W },					{ "K", KEY_BIG_K },	{ "W", KEY_BIG_W },
	{ 	"num_nine", 	KEY_NINE		},	{ "l", KEY_L },	{ "x", KEY_X },					{ "L", KEY_BIG_L },	{ "X", KEY_BIG_X },
	
	{	"backspace",	KEY_BACKSPACE	},
	{	"DEL",			KEY_DELETE		},
	{	"space",		KEY_SPACE		},

	{	"!",	KEY_EXCLAMATION_POINT	},
	{	"\"",	KEY_QUOTATION_MARK		},
	{	"#",	KEY_POUND_SIGN			},
	{	"$",	KEY_DOLLAR_SIGN			},
	{	"%",	KEY_PERCENTAGE_SIGN		},
	{	"&",	KEY_AMPERSAND_SIGN		},
	{	"\'",	KEY_APOSTROPHE			},
	{	",",	KEY_COMMA				},
	{	"-",	KEY_HYPHEN				},
	{	".",	KEY_PERIOD				},
	{	":",	KEY_COLON				},
	{	";",	KEY_SEMICOLON			},
	{	"<",	KEY_LESS_THAN			},
	{	"=",	KEY_EQUAL				},
	{	">",	KEY_GREAT_THAN			},
	{	"?",	KEY_QUESTION_MARK		},
	{	"@",	KEY_AT					},
	{	"^",	KEY_CARET				},
	{	"_",	KEY_UNDERSCORE			},
	{	"`",	KEY_GRAVE				},
	{	"~",	KEY_TILDE				},

	{	"(",	KEY_OPEN_PARENTHESIS		},
	{	")",	KEY_CLOSE_PARENTHESIS		},
	{	"[",	KEY_OPEN_SQUAREBRACKET		},
	{	"]",	KEY_CLOSE_SQUAREBRACKET		},
	{	"{",	KEY_OPEN_CURLYBRACKET		},
	{	"}",	KEY_CLOSE_CURLYBRACKET		},

	{	"/",	KEY_FORWARD_SLASH		},
	{	"\\",	KEY_BACKWARD_SLASH		},
	{	"|",	KEY_VERTICAL_BAR		}
};
	
template<typename K>
static inline void key_input(K &k) {
	k = getch();
}

template<typename K>
static inline std::string key_to_strkey(K k)
{
	std::string key;
	for (size_t i = 0; i < KEYMAP.size(); ++i) {
		if (k == KEYMAP[i].second) {
			key = KEYMAP[i].first;
			break;
		}
	}
	return key;
}

template<typename K>
static inline int strkey_to_key(K k)
{
	int key = 0;
	for (size_t i = 0; i < KEYMAP.size(); ++i) {
		if (k == KEYMAP[i].first) {
			key = KEYMAP[i].second;
			break;
		}
	}
	return key;
}

template<typename K>		
static inline bool key_pressed(K k, K t_k) {
	return (k == t_k);
}

template<typename K>
static inline bool key_pressed_str(K k, std::string t_key_s) {
	return (key_to_strkey(k) == t_key_s);
}

#endif // KEYINPUT_HPP
