/*
repeat
*/ 
const int ledPin = 13;
const int sensorPin = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
}

void loop()
{

    while(analogRead(sensorPin) > 100)
    {   
        Serial.println(analogRead(sensorPin));
        blink();
        Serial.print(". ");
    }
    Serial.println(analogRead(sensorPin));
}

void blink()
{
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
}