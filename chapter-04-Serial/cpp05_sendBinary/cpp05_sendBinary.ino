const int default_baud = 9600;
const int sleep_time = 1000;
void setup()
{
    Serial.begin(default_baud);
}

int value;
const int ulimit = 599;

void loop()
{
    Serial.print('H');
    value = random(ulimit);
    Serial.write(lowByte(value));
    Serial.write(highByte(value));

    value = random(ulimit);
    Serial.write(lowByte(value));
    Serial.write(highByte(value));
    delay(sleep_time);
}