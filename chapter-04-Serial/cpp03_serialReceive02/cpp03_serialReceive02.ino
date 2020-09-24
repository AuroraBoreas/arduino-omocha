const int def_baud = 9600;
const int sleep_time = 1000;
const int ledPin = 13;

void setup()
{
    Serial.begin(def_baud);
    pinMode(ledPin, OUTPUT);
}

int val;
int sign = 1;

void loop()
{
    // Serial.read()
    if (Serial.available())
    {
        char ch(Serial.read());
        if (isDigit(ch))
        {
            val = val * 10 + (ch - 48);
        } else if (ch == '-')
        {
            sign = -1;
        } else
        {
            val = val * sign;
            Serial.println(val);
            val = 0;
            sign = 1;
        }
        
    }

    Serial.println();
    delay(sleep_time);
}

void blink()
{
    digitalWrite(ledPin, HIGH);
    delay(val);
    digitalWrite(ledPin, HIGH);
    delay(val);
}