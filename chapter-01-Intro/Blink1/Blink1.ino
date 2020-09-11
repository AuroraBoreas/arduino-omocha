//

/*
! what?
LDR: 光敏电阻器

! why?
changes impedence based on environment luminance.
dark : ~ 200 omega
light: ~ 800 omega 

! how?
idk the underlying mechnism ..
but we may utilize LDR as advantage to build our project.

*/

const int ledPin    = 13;
const int sensorPin = 0;

void setup()
{
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    int rate = analogRead(sensorPin);
    digitalWrite(ledPin, HIGH);
    delay(rate);
    digitalWrite(ledPin, LOW);
    delay(rate);
}