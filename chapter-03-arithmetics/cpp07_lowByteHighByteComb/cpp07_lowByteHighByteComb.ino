const int default_baud = 9600;
const int sleep_time = 10000;

void setup()
{
    Serial.begin(default_baud);
}

int intVal(0x102);

void loop()
{
    // word(h, l) for 16-bit int only tho.
    byte loByte, hiByte;
    int loWord, hiWord;

    loByte = lowByte(intVal);
    hiByte = highByte(intVal);

    Serial.println(intVal, DEC);
    Serial.println(loByte, DEC);
    Serial.println(hiByte, DEC);

    loWord = word(hiByte, loByte);
    Serial.println(loWord, DEC);

    Serial.println();
    delay(sleep_time);
}