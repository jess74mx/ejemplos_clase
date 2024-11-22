/*
  Descripción: Encendido Led RGB
*/
/*
const byte pinLedR = 6;
const byte pinLedA = 5;
const byte pinLedV = 3;
*/

#define pinLedR 6
#define pinLedA 5
#define pinLedV 3

int pausa = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinLedR, OUTPUT);
  pinMode(pinLedA, OUTPUT);
  pinMode(pinLedV, OUTPUT);
  //test();
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Color Blanco
  analogWrite(pinLedR, 255);
  analogWrite(pinLedV, 255);
  analogWrite(pinLedA, 255);
  delay(pausa);
  // Color Rojo
  analogWrite(pinLedR, 255);
  analogWrite(pinLedV, 0);
  analogWrite(pinLedA, 0);
  delay(pausa);
  // Color Verde
  analogWrite(pinLedR, 0);
  analogWrite(pinLedV, 255);
  analogWrite(pinLedA, 0);
  delay(pausa);
  // Color Azul
  analogWrite(pinLedR, 0);
  analogWrite(pinLedV, 0);
  analogWrite(pinLedA, 255);
  delay(pausa);
  // Color Naranja
  analogWrite(pinLedR, 255);
  analogWrite(pinLedV, 128);
  analogWrite(pinLedA, 0);
  delay(pausa);
  // Color Negro
  analogWrite(pinLedR, 0);
  analogWrite(pinLedV, 0);
  analogWrite(pinLedA, 0);
  delay(pausa);
}

void test() {
  digitalWrite(pinLedR, HIGH);
  delay(pausa);
  digitalWrite(pinLedR, LOW);
  delay(pausa);
  digitalWrite(pinLedV, HIGH);
  delay(pausa);
  digitalWrite(pinLedV, LOW);
  delay(pausa);
  digitalWrite(pinLedA, HIGH);
  delay(pausa);
  digitalWrite(pinLedA, LOW);
  delay(pausa);
}