#include <LiquidCrystal.h>

LiquidCrystal mi_lcd(2,3,4,5,6,7);
// LiquidCrystal mi_lcd(RS,E,DB4,DB5,DB6,DB7);

void setup() {
  // put your setup code here, to run once:
  mi_lcd.begin(16,2);
  mi_lcd.print("Cargando...");
  delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:
  mi_lcd.setCursor(0,0);
  mi_lcd.print("Hola mundo...");
  //delay(1000);
  //mi_lcd.clear();
  mi_lcd.setCursor(1,1);
  mi_lcd.print("Me llamo Jesus");
  delay(1000);
  mi_lcd.clear();
}
