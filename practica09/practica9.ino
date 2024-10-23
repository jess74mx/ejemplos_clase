const byte pinRel = 4;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinRel, OUTPUT);
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinRel, HIGH);
  delay(3000);
  digitalWrite(pinRel, LOW);
  delay(3000);
}
