//www.elegoo.com
//2016.12.9

/*
  LiquidCrystal Library - Hello World

 Demonstrates the use of a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 7
 * LCD Enable pin to digital pin 8
 * LCD D4 pin to digital pin 9
 * LCD D5 pin to digital pin 10
 * LCD D6 pin to digital pin 11
 * LCD D7 pin to digital pin 12
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 Library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 Example added 9 Jul 2009
 by Tom Igoe
 Modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void LCD_print(char []);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
//  lcd.setCursor(0, 0);
  // Print a message to the LCD.
  char input[] = "We're no strangers to love, you know the rules and so do I, A full commitments what I'm thinking of, I just wanna tell you how I'm feeling, Never gonna give uyou up, never gonna let you down, never gonna run aaround and Deseeert you";
  LCD_print(input);
}

void loop() {

}


void LCD_print(char input[])
{
  if(strlen(input)>16)
  {
  char i1[17];
   memcpy(i1, input+strlen(input)-16, 16);
   i1[16] = '\0';
   lcd.print(i1);
  }else
  {
    lcd.setCursor(0,0);
    lcd.print(input);
  }
}



//Code for scrolling outdated
//  for(int i = 0; input[i+15] != '\0' ;++i)
//    {
//            memcpy(i1, input+i, 16);
//            i1[16] = '\0';
//            lcd.print(i1);
//            lcd.setCursor(0,0);
//            delay(500);
//    }
