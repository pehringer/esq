#ifndef ESQ_H
#define ESQ_H

#include<stdio.h>

// ANSI escape sequence notes:
// Starts with either octal: '\033', hexadecimal: '\x1B'.
// Followed by '['.
// Followed by optional ';' delimeted arguments.
// Ends with command itself.

// Descriptors corresponding to ASNI escape codes.
enum esq_FontEffect { esq_removeEffects    = 0,
                      esq_bold             = 1,
                      esq_faint            = 2,
                      esq_italic           = 3,
                      esq_underline        = 4,
                      esq_blink            = 5,
                      esq_foreDarkBlack    = 30,
                      esq_foreDarkRed      = 31,
                      esq_foreDarkGreen    = 32,
                      esq_foreDarkYellow   = 33,
                      esq_foreDarkBlue     = 34,
                      esq_foreDarkMagenta  = 35,
                      esq_foreDarkCyan     = 36,
                      esq_foreDarkWhite    = 37,
                      esq_backDarkBlack    = 40,
                      esq_backDarkRed      = 41,
                      esq_backDarkGreen    = 42,
                      esq_backDarkYellow   = 43,
                      esq_backDarkBlue     = 44,
                      esq_backDarkMagenta  = 45,
                      esq_backDarkCyan     = 46,
                      esq_backDarkWhite    = 47,
                      esq_foreLightBlack   = 90,
                      esq_foreLightRed     = 91,
                      esq_foreLightGreen   = 92,
                      esq_foreLightYellow  = 93,
                      esq_foreLightBlue    = 94,
                      esq_foreLightMagenta = 95,
                      esq_foreLightCyan    = 96,
                      esq_foreLightWhite   = 97,
                      esq_backLightBlack   = 100,
                      esq_backLightRed     = 101,
                      esq_backLightGreen   = 102,
                      esq_backLightYellow  = 103,
                      esq_backLightBlue    = 104,
                      esq_backLightMagenta = 105,
                      esq_backLightCyan    = 106,
                      esq_backLightWhite   = 107 };

// Applies one given effect to terminal font.
// Format: \033[<CODE>m
void esq_SingleFontEffect (enum esq_FontEffect first);

// Applies two given effects to terminal font.
// Format: \033[<CODE>;<CODE>m
void esq_DoubleFontEffect (enum esq_FontEffect first, enum esq_FontEffect second);

// Applies three given effects to terminal font.
// Format: \033[<CODE>;<CODE>;<CODE>m
void esq_TripleFontEffect (enum esq_FontEffect first, enum esq_FontEffect second,
                                                      enum esq_FontEffect third);
// Applies given RGB color to foreground of font.
// Format: \033[38;2;<RED>;<GREEN>;<BLUE>m
// Note: code 38: font foreground color. followed by code 2: RGB arguments.
void esq_FontForegroundColor (unsigned int red, unsigned int green, unsigned int blue);

// Applies given RGB color to background of font.
// Format: \033[48;2;<RED>;<GREEN>;<BLUE>m
// Note: code 48: font background color. followed by code 2: RGB arguments.
void esq_FontBackgroundColor (unsigned int red, unsigned int green, unsigned int blue);

// Applies given RGB colors to foreground and background of font respectively.
// Format: \033[38;2;<RED>;<GREEN>;<BLUE>;48;2;<RED>;<GREEN>;<BLUE>m
// Note: code 38: font foreground color. followed by code 2: RGB arguments.
// Note: code 48: font background color. followed by code 2: RGB arguments.
void esq_FontColors (unsigned int foreRed, unsigned int foreGreen, unsigned int foreBlue,
                     unsigned int backRed, unsigned int backGreen, unsigned int backBlue);

#endif
