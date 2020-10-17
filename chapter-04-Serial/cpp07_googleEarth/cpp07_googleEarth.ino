/*
P131
wiichuckSerial

*/

#include <Wire.h>
#include "Nunchuch.h"

int offsetX, offsetY, offsetZ;

void setup()
{
    Serial.begin(9600);
    nunchuckSetPowerPins();
    nunchuckInit();
    nunchuckRead();
    delay(50);
}

void loop()
{
    nunchuckRead();
    delay(6);
    nunchuck_get_data();
    boolean btnC = nunchuckGetValue(wii_btnC);
    boolean btnZ = nunchuckGetValue(wii_btnZ);

    if(btnC)
    {
        offsetX = 127 - nunchuckGetValue(wii_accelX);
        offsetY = 127 - nunchuckGetValue(wii_accelY);
    }
    Serial.print("Data,");
    printAccel(nunchuckGetValue(wii_accelX), offsetX);
    printAccel(nunchuckGetValue(wii_accelY), offsetY);
    printButton(nunchuckGetValue(wii_btnZ));

    Serial.println();
}

void printAccel(int value, int offset)
{
    Serial.print(adjReading(value, 127-50, 127+50, offset));
    Serial.print(',');
}

void printJoy(int value)
{
    Serial.print(adjReading(value, 0, 255, 0));
    Serial.print(',');
}

void printButton(int value)
{
    if(value != 0)
        value = 127;
    Serial.print(value, DEC);
    Serial.print(',')
}

int adjReading(int value, int min, int max, int offset)
{
    value = constrain(value + offset, min, max);
    value = map(value, min, max, -127, 127);
    return value;
}