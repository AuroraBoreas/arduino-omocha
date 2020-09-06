const int ledPin    = 13;
const int sensorPin = 0;

const int minDuration = 100;
const int maxDuration = 1000;

void setup()
{
    // prerequisit;
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    // do stuff;
    int rate = analogRead(sensorPin);
    rate = map(rate, 200, 800, minDuration, maxDuration);
    rate = constrain(rate, minDuration, maxDuration);
    digitalWrite(ledPin, HIGH);
    delay(rate);
    digitalWrite(ledPin, LOW);
    delay(rate);
}