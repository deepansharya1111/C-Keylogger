#ifndef KEYCONSTANTS_H     /*Creating a guard for this header file here. This make sure that the header file will not be include more than once*/
#define KEYCONSTANTS_H

#include <map>             /*Map= this is comparable to a hash table in Java.*/
#include <string>                /*type map in C++ and the very first search on Google will tell you what it actually is.
                                 It's like an Array. Array that is based on key value pairs.
                                Each value has a key that is used for accessing that particular value*/
class KeyPair
(
  public:
      KeyPair (const std::string &vk = "", const std::string &name = "") : VKName (vk),    //this is a constructor with some optional parameters defined inside.these parameters will form our keypair.
                                                                        Name (name)        // i have left the constant pair names blank "" . then pre-initialized these variables following : VKName and Name(with an empty body)
                                                                        { }
      std::string VKName;    //this will represent the virtual key name. this is what will store keys from the system. we won't be able to read it as it will be understandable by the system
      std::string Name;      //is is what we be something we can set and will be able to read in human friendly language

);

class Keys                  //Now, we will use this class in order to store a map of Keys that we get from the system. And we will translate them into something closer to our understanding that is more Human-friendly.
{
  public:
      static std::map<int, Keypair> KEYS;       //Now, we will use this map in order to map the vk code, to human readable form that is logged to our text files So, we want the logs to be in a human-readable form.

};

/* Virtual-Key Codes */
/* these can be found here http://www.kbdedit.com/manual/low_level_vk_list.html ...and here https://github.com/awakecoding/Win32Keyboard/blob/master/vkcodes.h
and these can also be customized according to different keyboards layouts on basis of how they map virtual keystrokes*/
//the 0xC1 part is how the system registers a keystroke.

std::map<int, KeyPair> Keys::KEYS = {
    /* Mouse buttons */
    {0x01, {"[VK_LBUTTON]", "[Left Button **]"}},   /* Left mouse button */
    {0x02, {"[VK_RBUTTON]", "[Right Button **]"}},  /* Right mouse button */
    {0x03, {"[VK_CANCEL]", "[Break]"}},             /* Control-break processing */
    {0x04, {"[VK_MBUTTON]", "[Middle Button **]"}}, /* Middle mouse button (three-button mouse) */
    {0x05, {"[VK_XBUTTON1]", "[X Button 1 **]"}},   /* Windows 2000/XP: X1 mouse button */
    {0x06, {"[VK_XBUTTON2]", "[X Button 2 **]"}},   /* Windows 2000/XP: X2 mouse button */

/* 0x07 is undefined */

    {0x08, {"[VK_BACK]", "[Backspace]"}},    /* BACKSPACE key */
    {0x09, {"[VK_TAB]", "[Tab]"}},           /* TAB key */

/* 0x0A to 0x0B are reserved */

    {0x0C, {"[VK_CLEAR]", "[Clear]"}},        /* CLEAR key */
    {0x0D, {"[VK_RETURN]", "[Enter]"}},       /* ENTER key */

/* 0x0E to 0x0F are undefined */

    {0x10, {"[VK_SHIFT]", "[SHIFT key]"}},    /* SHIFT key */
    {0x11, {"[VK_CONTROL]", "[CTRL key]"}},   /* CTRL key */
    {0x12, {"[VK_MENU]", "[ALT key]"}},       /* ALT key */
    {0x13, {"[VK_PAUSE]", "[Pause]"}},        /* PAUSE key */
    {0x14, {"[VK_CAPITAL]", "[Caps Lock]"}},  /* CAPS LOCK key */
    {0x15, {"[VK_KANA]", "[Kana]"}},          /* Input Method Editor (IME) Kana mode */
    {0x15, {"[VK_HANGUEL]", "[HANGUEL]"}},       /* IME Hanguel mode (maintained for compatibility; use #define VK_HANGUL) */
    {0x15, {"[VK_HANGUL]", "[HANGUL]"}},        /* IME Hangul mode */

/* 0x16 is undefined */

    {0x17, {"[VK_JUNJA]", "[Junja]"}},    /* IME Junja mode */
    {0x18, {"[VK_FINAL]", "[Final]"}},    /* IME final mode */
    {0x19, {"[VK_KANJI]", "[Kanji]"}},    /* IME Kanji mode */
    {0x19, {"[VK_HANJA]", "[Hanja]"}},    /* IME Hanja mode */

/* 0x1A is undefined */

    {0x1B, {"[VK_ESCAPE]", "[Esc]"}},             /* ESC key */
    {0x1C, {"[VK_CONVERT]", "[Convert]"}},        /* IME convert */
    {0x1D, {"[VK_NONCONVERT]", "[Non Convert]"}}, /* IME nonconvert */
    {0x1E, {"[VK_ACCEPT]", "[Accept]"}},          /* IME accept */
    {0x1F, {"[VK_MODECHANGE]", "[Mode Change]"}}, /* IME mode change request */
    {0x20, {"[VK_SPACE]", "[Space]"}},            /* SPACEBAR */
    {0x21, {"[VK_PRIOR]", "[Page Up]"}},          /* PAGE UP key */
    {0x22, {"[VK_NEXT]", "[Page Down]"}},         /* PAGE DOWN key */
    {0x23, {"[VK_END]", "[End]"}},                /* END key */
    {0x24, {"[VK_HOME]", "[Home]"}},              /* HOME key */
    {0x25, {"[VK_LEFT]", "[Arrow Left]"}},        /* LEFT ARROW key */
    {0x26, {"[VK_UP]", "[Arrow Up]"}},            /* UP ARROW key */
    {0x27, {"[VK_RIGHT]", "[Arrow Right]"}},      /* RIGHT ARROW key */
    {0x28, {"[VK_DOWN]", "[Arrow Down]"}},        /* DOWN ARROW key */
    {0x29, {"[VK_SELECT]", "[Select]"}},          /* SELECT key */
    {0x2A, {"[VK_PRINT]", "[Print]"}},            /* PRINT key */
    {0x2B, {"[VK_EXECUTE]", "[Execute]"}},        /* EXECUTE key */
    {0x2C, {"[VK_SNAPSHOT]", "[Print Screen]"}},  /* PRINT SCREEN key */
    {0x2D, {"[VK_INSERT]", "[Insert]"}},          /* INS key */
    {0x2E, {"[VK_DELETE]", "[Delete]"}},          /* DEL key */
    {0x2F, {"[VK_HELP]", "[Help]"}},              /* HELP key */

/* Digits, the last 4 bits of the code represent the corresponding digit */
    {0x30, {"[VK_KEY_0]", "[D0]"}},    /* '0' key */
    {0x31, {"[VK_KEY_1]", "[D1]"}},    /* '1' key */
    {0x32, {"[VK_KEY_2]", "[D2]"}},    /* '2' key */
    {0x33, {"[VK_KEY_3]", "[D3]"}},    /* '3' key */
    {0x34, {"[VK_KEY_4]", "[D4]"}},    /* '4' key */
    {0x35, {"[VK_KEY_5]", "[D5]"}},    /* '5' key */
    {0x36, {"[VK_KEY_6]", "[D6]"}},    /* '6' key */
    {0x37, {"[VK_KEY_7]", "[D7]"}},    /* '7' key */
    {0x38, {"[VK_KEY_8]", "[D8]"}},    /* '8' key */
    {0x39, {"[VK_KEY_9]", "[D9]"}},    /* '9' key */

/* 0x3A to 0x40 are undefined */

/* The alphabet, the code corresponds to the capitalized letter in the ASCII code */
    {0x41, {"[VK_KEY_A]", "[A]"}},     /* 'A' key */
    {0x42, {"[VK_KEY_B]", "[B]"}},     /* 'B' key */
    {0x43, {"[VK_KEY_C]", "[C]"}},     /* 'C' key */
    {0x44, {"[VK_KEY_D]", "[D]"}},     /* 'D' key */
    {0x45, {"[VK_KEY_E]", "[E]"}},     /* 'E' key */
    {0x46, {"[VK_KEY_F]", "[F]"}},     /* 'F' key */
    {0x47, {"[VK_KEY_G]", "[G]"}},     /* 'G' key */
    {0x48, {"[VK_KEY_H]", "[H]"}},     /* 'H' key */
    {0x49, {"[VK_KEY_I]", "[I]"}},     /* 'I' key */
    {0x4A, {"[VK_KEY_J]", "[J]"}},     /* 'J' key */
    {0x4B, {"[VK_KEY_K]", "[K]"}},     /* 'K' key */
    {0x4C, {"[VK_KEY_L]", "[L]"}},     /* 'L' key */
    {0x4D, {"[VK_KEY_M]", "[M]"}},     /* 'M' key */
    {0x4E, {"[VK_KEY_N]", "[N]"}},     /* 'N' key */
    {0x4F, {"[VK_KEY_O]", "[O]"}},     /* 'O' key */
    {0x50, {"[VK_KEY_P]", "[P]"}},     /* 'P' key */
    {0x51, {"[VK_KEY_Q]", "[Q]"}},     /* 'Q' key */
    {0x52, {"[VK_KEY_R]", "[R]"}},     /* 'R' key */
    {0x53, {"[VK_KEY_S]", "[S]"}},     /* 'S' key */
    {0x54, {"[VK_KEY_T]", "[T]"}},     /* 'T' key */
    {0x55, {"[VK_KEY_U]", "[U]"}},     /* 'U' key */
    {0x56, {"[VK_KEY_V]", "[V]"}},     /* 'V' key */
    {0x57, {"[VK_KEY_W]", "[W]"}},     /* 'W' key */
    {0x58, {"[VK_KEY_X]", "[X]"}},     /* 'X' key */
    {0x59, {"[VK_KEY_Y]", "[Y]"}},     /* 'Y' key */
    {0x5A, {"[VK_KEY_Z]", "[Z]"}},     /* 'Z' key */

    {0x5B, {"[VK_LWIN]", "[Left Win]"}},      /* Left Windows key (Microsoft Natural keyboard) */
    {0x5C, {"[VK_RWIN]", "[Right Win]"}},     /* Right Windows key (Natural keyboard) */
    {0x5D, {"[VK_APPS]", "[Context Menu]"}},  /* Applications key (Natural keyboard) */

/* 0x5E is reserved */

    {0x5F, {"[VK_SLEEP]", "[Sleep]"}},   /* Computer Sleep key */

/* Numeric keypad digits, the last four bits of the code represent the corresponding digit */
    {0x60, {"[VK_NUMPAD0]", "[N0]"}},/* Numeric keypad '0' key */
    {0x61, {"[VK_NUMPAD1]", "[N1]"}},/* Numeric keypad '1' key */
    {0x62, {"[VK_NUMPAD2]", "[N2]"}},/* Numeric keypad '2' key */
    {0x63, {"[VK_NUMPAD3]", "[N3]"}},/* Numeric keypad '3' key */
    {0x64, {"[VK_NUMPAD4]", "[N4]"}},/* Numeric keypad '4' key */
    {0x65, {"[VK_NUMPAD5]", "[N5]"}},/* Numeric keypad '5' key */
    {0x66, {"[VK_NUMPAD6]", "[N6]"}},/* Numeric keypad '6' key */
    {0x67, {"[VK_NUMPAD7]", "[N7]"}},/* Numeric keypad '7' key */
    {0x68, {"[VK_NUMPAD8]", "[N8]"}},/* Numeric keypad '8' key */
    {0x69, {"[VK_NUMPAD9]", "[N9]"}},/* Numeric keypad '9' key */

/* Numeric keypad operators and special keys */
    {0x6A, {"[VK_MULTIPLY]", "[Numpad *]"}},     /* Multiply key */
    {0x6B, {"[VK_ADD]", "[Numpad +]"}},          /* Add key */
    {0x6C, {"[VK_SEPARATOR]", "[Separator]"}},   /* Separator key */
    {0x6D, {"[VK_SUBTRACT]", "[Num -]"}},        /* Subtract key */
    {0x6E, {"[VK_DECIMAL]", "[Numpad .]"}},      /* Decimal key */
    {0x6F, {"[VK_DIVIDE]", "[Numpad /]"}},       /* Divide key */

/* Function keys, from F1 to F24 */
    {0x70, {"[VK_F1]", "[F1]"}},   /* F1 key */
    {0x71, {"[VK_F2]", "[F2]"}},   /* F2 key */
    {0x72, {"[VK_F3]", "[F3]"}},   /* F3 key */
    {0x73, {"[VK_F4]", "[F4]"}},   /* F4 key */
    {0x74, {"[VK_F5]", "[F5]"}},   /* F5 key */
    {0x75, {"[VK_F6]", "[F6]"}},   /* F6 key */
    {0x76, {"[VK_F7]", "[F7]"}},   /* F7 key */
    {0x77, {"[VK_F8]", "[F8]"}},   /* F8 key */
    {0x78, {"[VK_F9]", "[F9]"}},   /* F9 key */
    {0x79, {"[VK_F10]", "[F10]"}}, /* F10 key */
    {0x7A, {"[VK_F11]", "[F11]"}}, /* F11 key */
    {0x7B, {"[VK_F12]", "[F12]"}}, /* F12 key */
    {0x7C, {"[VK_F13]", "[F13]"}}, /* F13 key */
    {0x7D, {"[VK_F14]", "[F14]"}}, /* F14 key */
    {0x7E, {"[VK_F15]", "[F15]"}}, /* F15 key */
    {0x7F, {"[VK_F16]", "[F16]"}}, /* F16 key */
    {0x80, {"[VK_F17]", "[F17]"}}, /* F17 key */
    {0x81, {"[VK_F18]", "[F18]"}}, /* F18 key */
    {0x82, {"[VK_F19]", "[F19]"}}, /* F19 key */
    {0x83, {"[VK_F20]", "[F20]"}}, /* F20 key */
    {0x84, {"[VK_F21]", "[F21]"}}, /* F21 key */
    {0x85, {"[VK_F22]", "[F22]"}}, /* F22 key */
    {0x86, {"[VK_F23]", "[F23]"}}, /* F23 key */
    {0x87, {"[VK_F24]", "[F24]"}}, /* F24 key */

/* 0x88 to 0x8F are unassigned */

    {0x90, {"[VK_NUMLOCK]", "[Num Lock]"}},    /* NUM LOCK key */
    {0x91, {"[VK_SCROLL]", "[Scrol Lock]"}},   /* SCROLL LOCK key */

/* 0x92 to 0x96 are OEM specific */
    {0x92, {"[VK_OEM_FJ_JISHO]", "[Jisho]"}},
    {0x93, {"[VK_OEM_FJ_MASSHOU]", "[Mashu]"}},
    {0x94, {"[VK_OEM_FJ_TOUROKU]", "[Touroku]"}},
    {0x95, {"[VK_OEM_FJ_LOYA]", "[Loya]"}},
    {0x96, {"[VK_OEM_FJ_ROYA]", "[Roya]"}},

/* 0x97 to 0x9F are unassigned */

/* Modifier keys */
    {0xA0, {"[VK_LSHIFT]", "[Left Shift]"}},      /* Left SHIFT key */
    {0xA1, {"[VK_RSHIFT]", "[Right Shift]"}},     /* Right SHIFT key */
    {0xA2, {"[VK_LCONTROL]", "[Left Ctrl]"}},     /* Left CONTROL key */
    {0xA3, {"[VK_RCONTROL]", "[Right Ctrl]"}},    /* Right CONTROL key */
    {0xA4, {"[VK_LMENU]", "[Left Alt]"}},         /* Left MENU key */
    {0xA5, {"[VK_RMENU]", "[Right Alt]"}},        /* Right MENU key */

/* Browser related keys */
    {0xA6, {"[VK_BROWSER_BACK]", "[Browser Back]"}},           /* Windows 2000/XP: Browser Back key */
    {0xA7, {"[VK_BROWSER_FORWARD]", "[Browser Forward]"}},     /* Windows 2000/XP: Browser Forward key */
    {0xA8, {"[VK_BROWSER_REFRESH]", "[Browser Refresh]"}},     /* Windows 2000/XP: Browser Refresh key */
    {0xA9, {"[VK_BROWSER_STOP]", "[Browser Stop]"}},           /* Windows 2000/XP: Browser Stop key */
    {0xAA, {"[VK_BROWSER_SEARCH]", "[Browser Search]"}},       /* Windows 2000/XP: Browser Search key */
    {0xAB, {"[VK_BROWSER_FAVORITES]", "[Browser Favorites]"}}, /* Windows 2000/XP: Browser Favorites key */
    {0xAC, {"[VK_BROWSER_HOME]", "[Browser Home]"}},           /* Windows 2000/XP: Browser Start and Home key */

/* Volume related keys */
    {0xAD, {"[VK_VOLUME_MUTE]", "[Volume Mute]"}},   /* Windows 2000/XP: Volume Mute key */
    {0xAE, {"[VK_VOLUME_DOWN]", "[Volume Down]"}},   /* Windows 2000/XP: Volume Down key */
    {0xAF, {"[VK_VOLUME_UP]", "[Volume Up]"}},       /* Windows 2000/XP: Volume Up key */

/* Media player related keys */
    {0xB0, {"[VK_MEDIA_NEXT_TRACK]", "[Next Track]"}},      /* Windows 2000/XP: Next Track key */
    {0xB1, {"[VK_MEDIA_PREV_TRACK]", "[Previous Track]"}},  /* Windows 2000/XP: Previous Track key */
    {0xB2, {"[VK_MEDIA_STOP]", "[Stop]"}},                  /* Windows 2000/XP: Stop Media key */
    {0xB3, {"[VK_MEDIA_PLAY_PAUSE]", "[Play / Pause]"}},    /* Windows 2000/XP: Play/Pause Media key */

/* Application launcher keys */
    {0xB4, {"[VK_LAUNCH_MAIL]", "[Mail]"}},            /* Windows 2000/XP: Start Mail key */
    {0xB5, {"[VK_LAUNCH_MEDIA_SELECT]", "[Media]"}},   /* Windows 2000/XP: Select Media key */
    {0xB6, {"[VK_LAUNCH_APP1]", "[App1]"}},            /* Windows 2000/XP: Start Application 1 key */
    {0xB7, {"[VK_LAUNCH_APP2]", "[App2]"}},            /* Windows 2000/XP: Start Application 2 key */

/* 0xB8 and 0xB9 are reserved */

/* OEM keys */
    {0xBA, {"[VK_OEM_1]", "[OEM_1 (: ;)]"}},            /* Used for miscellaneous characters; it can vary by keyboard. */
			                                            /* Windows 2000/XP: For the US standard keyboard, the ';:' key */
    {0xBB, {"[VK_OEM_PLUS]", "[OEM_PLUS (+ =)]"}},      /* Windows 2000/XP: For any country/region, the '+' key */
    {0xBC, {"[VK_OEM_COMMA]", "[OEM_COMMA (< ,)]"}},    /* Windows 2000/XP: For any country/region, the ',' key */
    {0xBD, {"[VK_OEM_MINUS]", "[OEM_MINUS (_ -)]"}},    /* Windows 2000/XP: For any country/region, the '-' key */
    {0xBE, {"[VK_OEM_PERIOD]", "[OEM_PERIOD (> .)]"}},  /* Windows 2000/XP: For any country/region, the '.' key */
    {0xBF, {"[VK_OEM_2]", "[OEM_2 (? /)]"}},            /* Used for miscellaneous characters; it can vary by keyboard. */
			                                            /* Windows 2000/XP: For the US standard keyboard, the '/?' key */

    {0xC0, {"[VK_OEM_3]", "[OEM_3 (~ `)]"}},    /* Used for miscellaneous characters; it can vary by keyboard. */
			                                    /* Windows 2000/XP: For the US standard keyboard, the '`~' key */
    {0xC1, {"[VK_ABNT_C1]", "[Abnt C1]"}},      /* Brazilian (ABNT) Keyboard */
    {0xC2, {"[VK_ABNT_C2]", "[Abnt C2]"}},      /* Brazilian (ABNT) Keyboard */

/* 0xD8 to 0xDA are unassigned */

    {0xDB, {"[VK_OEM_4]", "[OEM_4 ({ [)]"}},    /* Used for miscellaneous characters; it can vary by keyboard. */
			                                    /* Windows 2000/XP: For the US standard keyboard, the '[{' key */
    {0xDC, {"[VK_OEM_5]", "[OEM_5 (| \\)]"}},   /* Used for miscellaneous characters; it can vary by keyboard. */
			                                    /* Windows 2000/XP: For the US standard keyboard, the '\|' key */
    {0xDD, {"[VK_OEM_6]", "[OEM_6 (} ])]"}},    /* Used for miscellaneous characters; it can vary by keyboard. */
                                                /* Windows 2000/XP: For the US standard keyboard, the ']}' key */
    {0xDE, {"[VK_OEM_7]", "[OEM_7 (\" ')]"}},   /* Used for miscellaneous characters; it can vary by keyboard. */
			                                    /* Windows 2000/XP: For the US standard keyboard, the 'single-quote/double-quote' key */
    {0xDF, {"[VK_OEM_8]", "[OEM_8 (§ !)]"}},    /* Used for miscellaneous characters; it can vary by keyboard. */

/* 0xE0 is reserved */
/* 0xE1 is OEM specific */
    {0xE1, {"[VK_OEM_AX]", "[Ax]"}},
    {0xE2, {"[VK_OEM_102]", "[OEM_102 (> <)]"}}, /* Windows 2000/XP: Either the angle bracket key or */
                                                 /* the backslash key on the RT 102-key keyboard */
/* 0xE3 and 0xE4 are OEM specific */
    {0xE3, {"[VK_ICO_HELP]", "[IcoHlp]"}},
    {0xE4, {"[VK_ICO_00]", "[Ico00 *]"}},
    {0xE5, {"[VK_PROCESSKEY]", "[Process]"}},    /* Windows 95/98/Me, Windows NT 4.0, Windows 2000/XP: IME PROCESS key */
/* 0xE6 is OEM specific */
    {0xE6, {"[VK_ICO_CLEAR]", "[IcoClr]"}},
    {0xE7, {"[VK_PACKET]", "[Packet]"}},         /* Windows 2000/XP: Used to pass Unicode characters as if they were keystrokes. */
                                                 /* The #define VK_PACKET key is the low word of a 32-bit Virtual Key value used */
				                                 /* for non-keyboard input methods. For more information, */
				                                 /* see Remark in KEYBDINPUT, SendInput, WM_KEYDOWN, and WM_KEYUP */
/* 0xE8 is unassigned */
/* 0xE9 to 0xF5 are OEM specific */
    {0xE9, {"[VK_OEM_RESET]", "[Reset]"}},
    {0xEA, {"[VK_OEM_JUMP]", "[Jump]"}},
    {0xEB, {"[VK_OEM_PA1]", "[OemPa1]"}},
    {0xEC, {"[VK_OEM_PA2]", "[OemPa2]"}},
    {0xED, {"[VK_OEM_PA3]", "[OemPa3]"}},
    {0xEE, {"[VK_OEM_WSCTRL]", "[WsCtrl]"}},
    {0xEF, {"[VK_OEM_CUSEL]", "[Cu Sel]"}},
    {0xF0, {"[VK_OEM_ATTN]", "[Oem Attn]"}},
    {0xF1, {"[VK_OEM_FINISH]", "[Finish]"}},
    {0xF2, {"[VK_OEM_COPY]", "[Copy]"}},
    {0xF3, {"[VK_OEM_AUTO]", "[Auto]"}},
    {0xF4, {"[VK_OEM_ENLW]", "[Enlw]"}},
    {0xF5, {"[VK_OEM_BACKTAB]", "[Back Tab]"}},

    {0xF6, {"[VK_ATTN]", "[Attn]"}},             /* Attn key */
    {0xF7, {"[VK_CRSEL]", "[Cr Sel]"}},          /* CrSel key */
    {0xF8, {"[VK_EXSEL]", "[Ex Sel]"}},          /* ExSel key */
    {0xF9, {"[VK_EREOF]", "[Er Eof]"}},          /* Erase EOF key */
    {0xFA, {"[VK_PLAY]", "[Play]"}},             /* Play key */
    {0xFB, {"[VK_ZOOM]", "[Zoom]"}},             /* Zoom key */
    {0xFC, {"[VK_NONAME]", "[NoName]"}},         /* Reserved */
    {0xFD, {"[VK_PA1]", "[Pa1]"}},               /* PA1 key */
    {0xFE, {"[VK_OEM_CLEAR]", "[OemClr]"}},      /* Clear key */

};

#endif // KEYCONSTANTS_H
