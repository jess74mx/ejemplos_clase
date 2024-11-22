/*
  Nombre:
  Fecha:
  Descripción:
*/

// Definición de variables / constantes
const byte pinLed = 3;
const byte pinPot = A0;
int valPot = 0;
int valLed = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinLed, OUTPUT);
  pinMode(pinPot, INPUT);
  delay(100);

}

void loop() {
  // put your main code here, to run repeatedly:
  valPot = analogRead(pinPot);
  Serial.print("Valor Pot: ");
  Serial.println(valPot);
  valLed = map(valPot,0,1023,0,255);
  Serial.print("Valor Led: ");
  Serial.println(valLed);
  analogWrite(pinLed,valLed);
  //delay(1000);
}
