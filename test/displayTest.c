#include "esq.h"

int main (void)
{
  printf ("Font effects test:\n");

  // Row 0.
  esq_SingleFontEffect (esq_blink);
  printf ("#### Blink ############################################\n");
  esq_SingleFontEffect (esq_removeEffects);
  // Row 1.
  esq_TripleFontEffect (esq_italic, esq_underline, esq_foreDarkBlack);
  esq_SingleFontEffect (esq_backLightBlack);
  printf(" Light Black ");
  esq_SingleFontEffect (esq_backLightRed);
  printf(" Light Red     ");
  esq_SingleFontEffect (esq_backLightGreen);
  printf(" Light Green ");
  esq_SingleFontEffect (esq_backLightYellow);
  printf(" Light Yellow ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 2.
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_SingleFontEffect (esq_backDarkBlack);
  printf(" Dark Black  ");
  esq_SingleFontEffect (esq_backDarkRed);
  printf(" Dark Red      ");
  esq_SingleFontEffect (esq_backDarkGreen);
  printf(" Dark Green  ");
  esq_SingleFontEffect (esq_backDarkYellow);
  printf(" Dark Yellow  ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 3.
  esq_TripleFontEffect (esq_italic, esq_underline, esq_foreDarkBlack);
  esq_SingleFontEffect (esq_backLightBlue);
  printf(" Light Blue  ");
  esq_SingleFontEffect (esq_backLightMagenta);
  printf(" Light Magenta ");
  esq_SingleFontEffect (esq_backLightCyan);
  printf(" Light Cyan  ");
  esq_SingleFontEffect (esq_backLightWhite);
  printf(" Light White  ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 4.
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_SingleFontEffect (esq_backDarkBlue);
  printf(" Dark Blue   ");
  esq_SingleFontEffect (esq_backDarkMagenta);
  printf(" Dark Magenta  ");
  esq_SingleFontEffect (esq_backDarkCyan);
  printf(" Dark Cyan   ");
  esq_DoubleFontEffect (esq_backDarkWhite, esq_foreDarkBlack);
  printf(" Dark White   ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 5.
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_SingleFontEffect (esq_foreLightBlack);
  printf(" Light Black ");
  esq_SingleFontEffect (esq_foreLightRed);
  printf(" Light Red     ");
  esq_SingleFontEffect (esq_foreLightGreen);
  printf(" Light Green ");
  esq_SingleFontEffect (esq_foreLightYellow);
  printf(" Light Yellow ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 6.
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_DoubleFontEffect (esq_foreDarkBlack, esq_backLightBlack);
  printf(" Dark Black  ");
  esq_SingleFontEffect (esq_removeEffects);
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_SingleFontEffect (esq_foreDarkRed);
  printf(" Dark Red      ");
  esq_SingleFontEffect (esq_foreDarkGreen);
  printf(" Dark Green  ");
  esq_SingleFontEffect (esq_foreDarkYellow);
  printf(" Dark Yellow  ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 7.
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_SingleFontEffect (esq_foreLightBlue);
  printf(" Light Blue  ");
  esq_SingleFontEffect (esq_foreLightMagenta);
  printf(" Light Magenta ");
  esq_SingleFontEffect (esq_foreLightCyan);
  printf(" Light Cyan  ");
  esq_SingleFontEffect (esq_foreLightWhite);
  printf(" Light White  ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 8.
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_SingleFontEffect (esq_foreDarkBlue);
  printf(" Dark Blue   ");
  esq_SingleFontEffect (esq_foreDarkMagenta);
  printf(" Dark Magenta  ");
  esq_SingleFontEffect (esq_foreDarkCyan);
  printf(" Dark Cyan   ");
  esq_SingleFontEffect (esq_foreDarkWhite);
  printf(" Dark White   ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 9.
  esq_SingleFontEffect (esq_blink);
  printf ("#### Blink ############################################\n");
  esq_SingleFontEffect (esq_removeEffects);
}
