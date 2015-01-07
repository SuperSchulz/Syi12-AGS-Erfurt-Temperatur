// 
// Anpassungen im makefile:
//    ATMega8 => MCU=atmega8 im makefile einstellen
//    lcd-routines.c in SRC = ... Zeile anhängen
// 
#include <avr/io.h>
#include "lcd-routines.h"
 
int main(void)
{
  // Initialisierung des LCD
  // Nach der Initialisierung müssen auf dem LCD vorhandene schwarze Balken
  // verschwunden sein
  lcd_init();
 
  // Text in einzelnen Zeichen ausgeben
  lcd_data( 'T' );
  lcd_data( 'e' );
  lcd_data( 's' );
  lcd_data( 't' );
 
  // Die Ausgabemarke in die 2te Zeile setzen
  lcd_setcursor( 0, 2 );
 
  // erneut Text ausgeben, aber diesmal komfortabler als String
  lcd_string("Hello World!");
 
  while(1)
  {
  }
 
  return 0;
}
