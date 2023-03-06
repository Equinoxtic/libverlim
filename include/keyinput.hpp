#ifndef KEYINPUT_HPP
#define KEYINPUT_HPP

#include<string>
#include<vector>
#include<conio.h>

// MISC KEYS
#define 	KEY_BACKSPACE		8
#define 	KEY_ENTER 			13
#define 	KEY_ESCAPE 			27
#define		KEY_SPACE			32
#define		KEY_DELETE			127
#define 	KEY_NBSP			255

// NUMBER KEYS
#define 	KEY_ZERO 			48
#define		KEY_ONE 			49
#define		KEY_TWO				50
#define 	KEY_THREE			51
#define 	KEY_FOUR			52
#define 	KEY_FIVE			53
#define 	KEY_SIX				54
#define 	KEY_SEVEN			55
#define		KEY_EIGHT 			56
#define		KEY_NINE			57

// UPPERCASE LETTER KEYS
#define 	KEY_BIG_A			65
#define		KEY_BIG_B			66
#define		KEY_BIG_C			67
#define		KEY_BIG_D			68
#define		KEY_BIG_E			69
#define		KEY_BIG_F			70
#define		KEY_BIG_G			71
#define		KEY_BIG_H			72
#define		KEY_BIG_I			73
#define		KEY_BIG_J			74
#define		KEY_BIG_K			75
#define		KEY_BIG_L			76
#define		KEY_BIG_M			77
#define		KEY_BIG_N			78
#define		KEY_BIG_O			79
#define		KEY_BIG_P			80
#define		KEY_BIG_Q			81
#define		KEY_BIG_R			82
#define		KEY_BIG_S			83
#define		KEY_BIG_T			84
#define		KEY_BIG_U			85
#define		KEY_BIG_V			86
#define		KEY_BIG_W			87
#define		KEY_BIG_X			88
#define		KEY_BIG_Y			89
#define		KEY_BIG_Z			90

// DEFAULT LETTER KEYS
#define 	KEY_A				97
#define		KEY_B				98
#define		KEY_C				99
#define		KEY_D				100
#define		KEY_E				101
#define		KEY_F				102
#define		KEY_G				103
#define		KEY_H				104
#define		KEY_I				105
#define		KEY_J				106
#define		KEY_K				107
#define		KEY_L				108
#define		KEY_M				109
#define		KEY_N				110
#define		KEY_O				111
#define		KEY_P				112
#define		KEY_Q				113
#define		KEY_R				114
#define		KEY_S				115
#define		KEY_T				116
#define		KEY_U				117
#define		KEY_V				118
#define		KEY_W				119
#define		KEY_X				120
#define		KEY_Y				121
#define		KEY_Z				122

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
	{	"delete",		KEY_DELETE		},
	{	"space",		KEY_SPACE		}
};
	
template<typename K>
static inline void key_input(K &k) {
	k = getch();
}

template<typename K>
static inline std::string key_to_strkey(K k) {
	std::string key;
	for (int i = 0; i < KEYMAP.size(); ++i) {
		if (k == KEYMAP[i].second) {
			key = KEYMAP[i].first;
			break;
		}
	}
	return key;
}

template<typename K>
static inline int strkey_to_key(K k) {
	int res = 0;
	for (int i = 0; i < KEYMAP.size(); ++i) {
		if (k == KEYMAP[i].first) {
			res = KEYMAP[i].second;
			break;
		}
	}
	return res;
}

template<typename K>
static inline bool key_pressed(K k, K t_k) {
	return (k == t_k);
}

#endif // KEYINPUT_HPP