
const char ledPin = 13;
const int default_baud = 9600;

void setup()
{
    Serial.begin(default_baud);
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    if (Serial.available())
    {
        char ch = Serial.read();
        switch (ch)
        {
        case '1':
            blink();
            break;
        case '2':
            blink();
            blink();
            break;
        case '+':
            digitalWrite(ledPin, HIGH);
            break;
        case '-':
            digitalWrite(ledPin, LOW);
            break;
        default:
            Serial.print(ch);
            Serial.println("was received but not expected");
            break;
        }
    }
}

void blink()
{
    int num_sleep = 500;
    digitalWrite(ledPin, HIGH);
    delay(num_sleep);
    digitalWrite(ledPin, LOW);
    delay(num_sleep);
}