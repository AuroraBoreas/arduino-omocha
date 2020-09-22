void setup()
{
    Serial.begin(9600);

    // String number = 1234; // not work arduino 1.18..
    int value = 127;
    String myReadout = "The reading was ";
    myReadout.concat(value);
    Serial.println(myReadout);
    // or
    myReadout += value;
    Serial.println(myReadout);
}

void loop()
{}