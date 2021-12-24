#include "esq.h"

void esq_SingleFontEffect (enum esq_FontEffect first)
{
  printf ("\033[%dm", first);
}

void esq_DoubleFontEffect (enum esq_FontEffect first, enum esq_FontEffect second)
{
  printf ("\033[%d;%dm", first, second);
}

void esq_TripleFontEffect (enum esq_FontEffect first, enum esq_FontEffect second,
                                                      enum esq_FontEffect third)
{
  printf ("\033[%d;%d;%dm", first, second, third);
}

void esq_FontForegroundColor (unsigned int red, unsigned int green, unsigned int blue)
{
  printf ("\033[38;2;%d;%d;%dm", red % 256, green % 256, blue % 256);
}

void esq_FontBackgroundColor (unsigned int red, unsigned int green, unsigned int blue)
{
  printf ("\033[48;2;%d;%d;%dm", red % 256, green % 256, blue % 256);
}

void esq_FontColors (unsigned int foreRed, unsigned int foreGreen, unsigned int foreBlue,
                     unsigned int backRed, unsigned int backGreen, unsigned int backBlue)
{
  printf ("\033[38;2;%d;%d;%d;48;2;%d;%d;%dm", foreRed % 256, foreGreen % 256,
          foreBlue % 256, backRed % 256, backGreen % 256, backBlue % 256);
}

void esq_CursorUp (unsigned int lines)
{
  printf ("\033[%dA", lines);
}

void esq_CursorDown (unsigned int lines)
{
  printf ("\033[%dB", lines);
}

void esq_CursorRight (unsigned int columns)
{
  printf ("\033[%dC", columns);
}

void esq_CursorLeft (unsigned int columns)
{
  printf ("\033[%dD", columns);
}

void esq_CursorColumn (unsigned int column)
{
  printf ("\033[%dG", column);
}

void esq_CursorHome (void)
{
  printf ("\033[H");
}

void esq_CursorLineColumn (unsigned int line, unsigned int column)
{
  printf ("\033[%d;%dH", line, column);
}

void esq_EraseAllAfterCursor (void)
{
  printf ("\033[0J");
}

void esq_EraseAllBeforeCursor (void)
{
  printf ("\033[1J");
}

void esq_EraseAll (void)
{
  printf ("\033[2J");
}

void esq_EraseLineAfterCursor (void)
{
  printf ("\033[0K");
}

void esq_EraseLineBeforeCursor (void)
{
  printf ("\033[1K");
}

void esq_EraseLine (void)
{
  printf ("\033[2K");
}
