// NumberToString

void setup()
{
    Serial.begin(9600);
}

char buffer[12];

void loop()
{
    long value = 12345;
    ltoa(value, buffer, 10);
    Serial.print(value);
    Serial.print(" has");
    Serial.print(strlen(buffer));
    Serial.println(" digits");

    value = 123456789;
    ltoa(value, buffer, 10);
    Serial.print(value);
    Serial.print(" has ");
    Serial.print(strlen(buffer));
    Serial.println(" digits");

}