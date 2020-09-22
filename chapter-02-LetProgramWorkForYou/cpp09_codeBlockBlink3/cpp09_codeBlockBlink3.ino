/*
blink3
*/ 

const int ledPin = 13;
const int inputPin = 2;


void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(inputPin, INPUT);
    digitalWrite(inputPin, HIGH);
    Serial.begin(9600);
}

void loop()
{
    Serial.println("Press and hold the switch to stop blinking");
    int count = blink3(250);
    Serial.print("the nummber of times the switch blinked was ");
    Serial.println(count);
}

int blink3(int period)
{
    int result = 0;
    int siwtchVal = HIGH;

    while(siwtchVal == HIGH)
    {
        digitalWrite(ledPin, HIGH);
        delay(period);
        digitalWrite(ledPin, LOW);
        delay(period);
        result += 1;
        siwtchVal = digitalRead(inputPin);
    }
    return result;
}