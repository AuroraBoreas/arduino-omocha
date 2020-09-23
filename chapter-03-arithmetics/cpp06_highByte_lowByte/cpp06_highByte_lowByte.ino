/*
lowBit(), highBit()
P87
*/ 
const int default_baud = 9600;
const int sleep_time = 10000;

void setup()
{
    Serial.begin(default_baud);
}

int intValue = 258; // 0x102;

void loop()
{
    int loWord, hiWord;
    byte loByte, hiByte;

    hiByte = highByte(intValue);
    loByte = lowByte(intValue);

    Serial.println(intValue, DEC);
    Serial.println(intValue, HEX);
    Serial.println(loByte, DEC);
    Serial.println(hiByte, DEC);

    Serial.println();
    delay(sleep_time);
}