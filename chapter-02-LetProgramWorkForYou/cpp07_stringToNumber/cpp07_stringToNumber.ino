/*StringToNumber*/ 

const int ledPin = 13;
int blinkDelay;
char strValue[6];

int index = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    char ch = Serial.read();
    Serial.println(ch);
    if (index < 5 && isDigit(ch)) 
    {
        strValue[index++] = ch;
    } else
    {
        strValue[index] = 0;
        blinkDelay = atoi(strValue);
        index = 0;
    }
    
    blink();
}

void blink()
{
    digitalWrite(ledPin, true);
    delay(blinkDelay / 2);
    digitalWrite(ledPin, false);
    delay(blinkDelay / 2);
}