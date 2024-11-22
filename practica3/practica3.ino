/*
  Nombre:
  Fecha:
  Descripción:
*/

// Definición de variables / constantes
const byte pinPot = A0;
int valPot = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinPot, INPUT);
  Serial.println("Lectura de potenciómetro");
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  valPot = analogRead(pinPot);
  Serial.print("Valor: ");
  Serial.println(valPot);
  delay(5000);
}
