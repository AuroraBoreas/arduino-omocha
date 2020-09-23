const int default_baud = 9600;
const int sleep_time = 10000;

void setup()
{
    Serial.begin(default_baud);
}


byte flags = 0;
void loop()
{
    
    // bitWrite(x, bitPosition)
    // bit(bitPosition) 
    /*
    byte var = 1;
    binary      0000 0001;
    bitPosition 7654 3210;
    bit      512 128 64 32 16 8 4 2 1;
    */
    Serial.println(flags);
    showFlags();
    setFlag(2);
    Serial.println(flags);
    setFlag(5);
    Serial.println(flags);
    showFlags();
    clearFlag(2);
    Serial.println(flags);
    showFlags();
    Serial.println(flags);

    Serial.println();
    delay(sleep_time);

}

void setFlag(int flagNumber)
{
    // bitSet(x, bitPosition)
    bitSet(flags, flagNumber);
}

void clearFlag(int flagNumber)
{
    // bitClear(x, bitPosition)
    bitClear(flags, flagNumber);
}

int getFlag(int flagNumber)
{
    // bitRead(x, bitPosition)
    return bitRead(flags, flagNumber);
}


void showFlags()
{
    for(int flag=0; flag < 9; flag++)
    {
        if (getFlag(flag) == true)
        {
            Serial.print("* bit set for flag ");
        } else
        {
            Serial.print("bit clear for flag ");
        }
        Serial.println(flag);
    }
    Serial.println();
}