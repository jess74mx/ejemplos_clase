#include <Servo.h>
#include <LiquidCrystal.h>

LiquidCrystal mi_lcd(2,3,4,5,6,7);

Servo my_servo;

const int pinServo = 9;
int giro = 0;

void setup() {
  // put your setup code here, to run once:
  mi_lcd.begin(16,2);
  my_servo.attach(pinServo);
  mi_lcd.print("Cargando...");
  //my_servo.write(90);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  mi_lcd.clear();
  mi_lcd.setCursor(0,0);
  mi_lcd.print("Ctrl. Servo");
  mi_lcd.setCursor(0,1);
  Serial.println("Giro: Izquierda");
  for(giro==5; giro<= 175; giro=giro+5){
    my_servo.write(giro);
    delay(500);
  }
  mi_lcd.clear();
  mi_lcd.setCursor(0,1);
  Serial.println("Giro: Derecha");
  for(giro==175; giro>= 5; giro=giro-5){
    my_servo.write(giro);
    delay(500);
  }
}
