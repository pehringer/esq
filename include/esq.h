#ifndef ESQ_H
#define ESQ_H

#include <stdio.h>

// ANSI escape sequence notes:
// Starts with either octal: '\033', hexadecimal: '\x1B'.
// Followed by '['.
// Followed by optional ';' delimeted arguments.
// Ends with command itself.

// Descriptors corresponding to ASNI escape codes.
enum esq_FontEffect { esq_removeEffects     = 0,
                      esq_bold              = 1,
                      esq_faint             = 2,
                      esq_italic            = 3,
                      esq_underline         = 4,
                      esq_blink             = 5,
                      esq_foreBlack         = 30,
                      esq_foreRed           = 31,
                      esq_foreGreen         = 32,
                      esq_foreYellow        = 33,
                      esq_foreBlue          = 34,
                      esq_foreMagenta       = 35,
                      esq_foreCyan          = 36,
                      esq_foreWhite         = 37,
                      esq_backBlack         = 40,
                      esq_backRed           = 41,
                      esq_backGreen         = 42,
                      esq_backYellow        = 43,
                      esq_backBlue          = 44,
                      esq_backMagenta       = 45,
                      esq_backCyan          = 46,
                      esq_backWhite         = 47,
                      esq_foreBrightBlack   = 90,
                      esq_foreBrightRed     = 91,
                      esq_foreBrightGreen   = 92,
                      esq_foreBrightYellow  = 93,
                      esq_foreBrightBlue    = 94,
                      esq_foreBrightMagenta = 95,
                      esq_foreBrightCyan    = 96,
                      esq_foreBrightWhite   = 97,
                      esq_backBrightBlack   = 100,
                      esq_backBrightRed     = 101,
                      esq_backBrightGreen   = 102,
                      esq_backBrightYellow  = 103,
                      esq_backBrightBlue    = 104,
                      esq_backBrightMagenta = 105,
                      esq_backBrightCyan    = 106,
                      esq_backBrightWhite   = 107 };

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
// Applies given RGB values to foreground of font.
// Format: \033[38;2;<RED>;<GREEN>;<BLUE>m
// Note: code 38: font foreground color. followed by code 2: RGB arguments.
void esq_FontForegroundColor (unsigned int red, unsigned int green, unsigned int blue);

// Applies given RGB values to background of font.
// Format: \033[48;2;<RED>;<GREEN>;<BLUE>m
// Note: code 48: font background color. followed by code 2: RGB arguments.
void esq_FontBackgroundColor (unsigned int red, unsigned int green, unsigned int blue);

// Applies given RGB values to foreground and background of font respectively.
// Format: \033[38;2;<RED>;<GREEN>;<BLUE>;48;2;<RED>;<GREEN>;<BLUE>m
// Note: code 38: font foreground color. followed by code 2: RGB arguments.
// Note: code 48: font background color. followed by code 2: RGB arguments.
void esq_FontColors (unsigned int foreRed, unsigned int foreGreen, unsigned int foreBlue,
                     unsigned int backRed, unsigned int backGreen, unsigned int backBlue);

// Moves cursor position up by given number of lines.
// Format: \033[<LINES>A
void esq_CursorUp (unsigned int lines);

// Moves cursor position down by given number of lines.
// Format: \033[<LINES>B
void esq_CursorDown (unsigned int lines);

// Moves cursor position right by given number of columns.
// Format: \033[<COLUMNS>C
void esq_CursorRight (unsigned int columns);

// Moves cursor position left by given number of columns.
// Format: \033[<COLUMNS>D
void esq_CursorLeft (unsigned int columns);

// Sets cursor column position to given column.
// Format: \033[<COLUMN>G
void esq_CursorColumn (unsigned int column);

// Moves cursor position to upper left corner (line 0 / column 0).
// Format: \033[H
void esq_CursorHome (void);

// Sets cursor line and column position to given line and column.
// Format: \033[<LINE>;<COLUMN>H
void esq_CursorLineColumn (unsigned int line, unsigned int column);

#endif
