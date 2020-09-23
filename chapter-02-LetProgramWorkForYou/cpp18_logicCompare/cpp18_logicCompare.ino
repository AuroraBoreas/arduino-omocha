const int default_baud = 9600;
const int sleep_time = 1000;

const int pin2 = 2;
const int pin3 = 3;
const int ledPin = 13;

void setup()
{
    Serial.begin(default_baud);
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    if (digitalRead(pin2) && digitalRead(pin3))
    {
        blink();
    } else
    {
        Serial.println("I DID NOTHING, CNM");
    }
    delay(sleep_time);
    
}

void blink()
{
    const int sleep_time = 500;
    digitalWrite(ledPin, HIGH);
    delay(sleep_time);
    digitalWrite(ledPin, LOW);
    delay(sleep_time);
}