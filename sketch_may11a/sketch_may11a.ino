int sensorPin = A0;
int ledPin = D1;
int sensorValue = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  // (INTERNAL);
  digitalWrite(ledPin, LOW);
}

void loop(){
  sensorValue = analogRead(sensorPin);
  sensorValue /= 4;
  analogWrite(ledPin, sensorValue);
}
