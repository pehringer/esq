#include"esq.h"

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
