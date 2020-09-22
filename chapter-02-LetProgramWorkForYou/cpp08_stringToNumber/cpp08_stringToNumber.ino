void setup()
{
    Serial.begin(9600);
    String aNumber = "1234";
    int value = aNumber.toInt();
    Serial.println(value);
}

void loop(){}