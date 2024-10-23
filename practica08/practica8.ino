#include "DHT.h"

#define pinDHT 2
#define DHTTYPE DHT11

DHT sensor(pinDHT, DHTTYPE);

float temp, hum;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  sensor.begin();
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  temp = sensor.readTemperature();
  hum = sensor.readHumidity();
  Serial.print("Temperatura: ");
  Serial.print(temp);
  Serial.println(" °C");
  Serial.print("Humedad: ");
  Serial.print(hum);
  Serial.println(" %");
}
