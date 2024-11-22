/*
  Nombre:
  Fecha:
  Descripción:
*/

// Definición de variables / constantes
const byte pinPotR = A0;
const byte pinPotV = A1;
const byte pinPotA = A2;
int valPotR = 0;
int valPotV = 0;
int valPotA = 0;

const byte pinLedR = 6;
const byte pinLedV = 5;
const byte pinLedA = 3;

byte valLedR = 0;
byte valLedV = 0;
byte valLedA = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinPotR, INPUT);
  pinMode(pinLedR, OUTPUT);
  pinMode(pinPotV, INPUT);
  pinMode(pinLedV, OUTPUT);
  pinMode(pinPotA, INPUT);
  pinMode(pinLedA, OUTPUT);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  valPotR = analogRead(pinPotR);
  valLedR = map(valPotR,0,1023,0,255);
  analogWrite(pinLedR,valLedR);
  valPotV = analogRead(pinPotV);
  valLedV = map(valPotV,0,1023,0,255);
  analogWrite(pinLedV,valLedV);
  valPotA = analogRead(pinPotA);
  valLedA = map(valPotA,0,1023,0,255);
  analogWrite(pinLedA,valLedA);
  delay(500);
}
