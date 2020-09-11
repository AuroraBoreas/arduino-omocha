/*

! what?

! why?

! how?

*/


const int ledPin = 13;
int ledOnDuration = 1000;

void setup()
{
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    
    digitalWrite(ledPin, true);
    delay(ledOnDuration);
    ledOnDuration = ledOnDuration - 100;
    if (ledOnDuration == 0)
    {
      Serial.println("lenOnDuration is zero");
    } else
    {
      Serial.println(ledOnDuration);  
    }
    digitalWrite(ledPin, false);
    delay(1000);
}
