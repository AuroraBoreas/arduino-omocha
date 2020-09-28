const int buttonPin = 2;
const int potXpin = 4;
const int potYpin = 5;

void setup()
{
    Serial.begin(9600);
    pinMode(buttonPin, INPUT);
    digitalWrite(buttonPin, HIGH);
}

void loop()
{
    int x = (512 - analogRead(potXpin)) / 4; // -127 ~ +127
    int y = (512 - analogRead(potYpin)) / 4;
    Serial.print("Data, ");
    Serial.print(x, DEC);
    Serial.print(",");
    Serial.print(y, DEC);
    Serial.print(",");
    if(digitalRead(buttonPin) == LOW)
    {
        Serial.print(1);
    } else
    {
        Serial.print(0);
    }

    Serial.print(",");
    delay(50);
    
}