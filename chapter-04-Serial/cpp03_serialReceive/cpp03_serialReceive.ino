const int default_baud = 9600;
const int sleep_time = 1000;
const int ledPin = 13;
int blinkRate;

void setup()
{
    Serial.begin(default_baud);
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    if (Serial.available())
    {
        char ch(Serial.read());
        Serial.print(ch);
        Serial.print("\t");
        if (isDigit(ch)) // ASCII value(0-9)?
        {
            // converts ASCII value to value, why?
            /* ASCII字符 P103
               字符: "0" - "9"
               数值: 48  - 57
               
               如何把"1"转换成数值?
               value("1") = ("1" - "0"); or value("1") = ("1" - 48);
               因为"1"的ASCII值是49, 因此要将其转换成数值1, 48(ASCII "0")必须被减去。
            */
            blinkRate = (ch - '0'); 
            blinkRate *= 100; // value * 100ms
            Serial.println(blinkRate);
        }
    }
    blink();

    Serial.println();
    delay(sleep_time);
}

void blink()
{   
    digitalWrite(ledPin, HIGH);
    delay(blinkRate);
    digitalWrite(ledPin, LOW);
    delay(blinkRate);
}
