/*
do... while ...
*/ 

const int ledPin = 13;
const int sensorPin = 0;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(sensorPin, INPUT);
    Serial.begin(9600);
}

void loop()
{
    do
    {
        blink();
        Serial.print('.');
        Serial.print(analogRead(sensorPin));
    } while (analogRead(sensorPin) > 100);
}

void blink()
{
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
}