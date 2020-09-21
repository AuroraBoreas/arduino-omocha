int inputPins[] = {2, 3, 4, 5};
int ledPins[] = {10, 11, 12, 13};

void setup()
{
    for (int i = 0; i < 4; i++)
    {
        pinMode(inputPins[i], INPUT);
        pinMode(ledPins[i], OUTPUT);
        digitalWrite(inputPins[i], true);
    }
}

void loop()
{
    for (int i = 0; i < 4; i++)
    {
        int val = digitalRead(inputPins[i]);
        if (val == LOW)
        {
            digitalWrite(ledPins[i], true);
        } else
        {
            digitalWrite(ledPins[i], false);
        }
    }
}