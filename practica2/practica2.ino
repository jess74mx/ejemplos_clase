/*
  Nombre:
  Fecha:
  Descripción:
*/

// Definición de variables / constantes

const byte pinLed1 = 2;
const byte pinLed2 = 3;
const byte pinLed3 = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);
  Serial.println("Hola...");
  Serial.println("Practica 2");
  Serial.println("...");
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  left();
  rigth();
}

void left(){
  // encendido de leds de izquierda a derecha
  digitalWrite(pinLed1, HIGH);
  delay(100);
  digitalWrite(pinLed1, LOW);
  delay(100);
  digitalWrite(pinLed2, HIGH);
  delay(100);
  digitalWrite(pinLed2, LOW);
  delay(100);
  digitalWrite(pinLed3, HIGH);
  delay(100);
  digitalWrite(pinLed3, LOW);
  delay(100);
}

void rigth(){
  // encendido de leds de izquierda a derecha
  digitalWrite(pinLed3, HIGH);
  delay(100);
  digitalWrite(pinLed3, LOW);
  delay(100);
  digitalWrite(pinLed2, HIGH);
  delay(100);
  digitalWrite(pinLed2, LOW);
  delay(100);
  digitalWrite(pinLed1, HIGH);
  delay(100);
  digitalWrite(pinLed1, LOW);
  delay(100);
}