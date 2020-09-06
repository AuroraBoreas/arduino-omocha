const int ledPin    = 13;
const int sensorPin = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    int rate = analogRead(sensorPin);
    digitalWrite(ledPin, HIGH);
    delay(rate);
    digitalWrite(ledPin, LOW);
    delay(rate);

}
