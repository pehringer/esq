#include "esq.h"

int main (void)
{
  // Row 0.
  esq_SingleFontEffect (esq_blink);
  printf ("######## Font Effects Test Below ########\n");
  esq_SingleFontEffect (esq_removeEffects);
  // Row 1.
  esq_TripleFontEffect (esq_italic, esq_underline, esq_foreBlack);
  esq_SingleFontEffect (esq_backBrightBlack);
  printf(" Bright Black ");
  esq_SingleFontEffect (esq_backBrightRed);
  printf(" Bright Red     ");
  esq_SingleFontEffect (esq_backBrightGreen);
  printf(" Bright Green ");
  esq_SingleFontEffect (esq_backBrightYellow);
  printf(" Bright Yellow ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 2.
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_SingleFontEffect (esq_backBlack);
  printf(" Black        ");
  esq_SingleFontEffect (esq_backRed);
  printf(" Red            ");
  esq_SingleFontEffect (esq_backGreen);
  printf(" Green        ");
  esq_SingleFontEffect (esq_backYellow);
  printf(" Yellow        ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 3.
  esq_TripleFontEffect (esq_italic, esq_underline, esq_foreBlack);
  esq_SingleFontEffect (esq_backBrightBlue);
  printf(" Bright Blue  ");
  esq_SingleFontEffect (esq_backBrightMagenta);
  printf(" Bright Magenta ");
  esq_SingleFontEffect (esq_backBrightCyan);
  printf(" Bright Cyan  ");
  esq_SingleFontEffect (esq_backBrightWhite);
  printf(" Bright White  ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 4.
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_SingleFontEffect (esq_backBlue);
  printf(" Blue         ");
  esq_SingleFontEffect (esq_backMagenta);
  printf(" Magenta        ");
  esq_SingleFontEffect (esq_backCyan);
  printf(" Cyan         ");
  esq_DoubleFontEffect (esq_backWhite, esq_foreBlack);
  printf(" White         ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 5.
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_SingleFontEffect (esq_foreBrightBlack);
  printf(" Bright Black ");
  esq_SingleFontEffect (esq_foreBrightRed);
  printf(" Bright Red     ");
  esq_SingleFontEffect (esq_foreBrightGreen);
  printf(" Bright Green ");
  esq_SingleFontEffect (esq_foreBrightYellow);
  printf(" Bright Yellow ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 6.
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_DoubleFontEffect (esq_foreBlack, esq_backBrightBlack);
  printf(" Black        ");
  esq_SingleFontEffect (esq_removeEffects);
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_SingleFontEffect (esq_foreRed);
  printf(" Red            ");
  esq_SingleFontEffect (esq_foreGreen);
  printf(" Green        ");
  esq_SingleFontEffect (esq_foreYellow);
  printf(" Yellow        ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 7.
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_SingleFontEffect (esq_foreBrightBlue);
  printf(" Bright Blue  ");
  esq_SingleFontEffect (esq_foreBrightMagenta);
  printf(" Bright Magenta ");
  esq_SingleFontEffect (esq_foreBrightCyan);
  printf(" Bright Cyan  ");
  esq_SingleFontEffect (esq_foreBrightWhite);
  printf(" Bright White  ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 8.
  esq_DoubleFontEffect (esq_italic, esq_underline);
  esq_SingleFontEffect (esq_foreBlue);
  printf(" Blue         ");
  esq_SingleFontEffect (esq_foreMagenta);
  printf(" Magenta        ");
  esq_SingleFontEffect (esq_foreCyan);
  printf(" Cyan         ");
  esq_SingleFontEffect (esq_foreWhite);
  printf(" White         ");
  esq_SingleFontEffect (esq_removeEffects);
  printf("\n");
  // Row 9.
  esq_SingleFontEffect (esq_blink);
  printf("######## Font RGB Colors Test Below ########\n");
  esq_SingleFontEffect (esq_removeEffects);
  // Row 10.
  int value;
  for (value = 0; value < 256; value += 4)
  {
    esq_FontBackgroundColor (value, 0, 0);
    printf ("|");
  }
  esq_SingleFontEffect (esq_removeEffects);
  printf ("\n");
  // Row 11.
  for (value = 0; value < 256; value += 4)
  {
    esq_FontBackgroundColor (0, value, 0);
    printf ("|");
  }
  esq_SingleFontEffect (esq_removeEffects);
  printf ("\n");
  // Row 12.
  for (value = 0; value < 256; value += 4)
  {
    esq_FontBackgroundColor (0, 0, value);
    printf ("|");
  }
  esq_SingleFontEffect (esq_removeEffects);
  printf ("\n");
  // Row 13.
  for (value = 0; value < 256; value += 4)
  {
    esq_FontForegroundColor (value, 0, 0);
    printf ("|");
  }
  esq_SingleFontEffect (esq_removeEffects);
  printf ("\n");
  // Row 14.
  for (value = 0; value < 256; value += 4)
  {
    esq_FontForegroundColor (0, value, 0);
    printf ("|");
  }
  esq_SingleFontEffect (esq_removeEffects);
  printf ("\n");
  // Row 15.
  for (value = 0; value < 256; value += 4)
  {
    esq_FontForegroundColor (0, 0, value);
    printf ("|");
  }
  esq_SingleFontEffect (esq_removeEffects);
  printf ("\n");
}
