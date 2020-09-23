const int default_baud = 9600;
const int sleep_time = 10000;

void setup()
{
    Serial.begin(default_baud);
}

void loop()
{
    byte a = 11; // 0000 1011
    Serial.print("a = ");
    Serial.println(a);

    // right shift 2 bit postions
    Serial.print("a >> 2, a = ");
    Serial.println(a >> 2); // b0000 0010 == d2;

    // left shift 2 bit postions
    Serial.print("a << 2, a = ");
    Serial.println(a << 2); // b0010 1100 == d44;

    Serial.println();
    delay(sleep_time);
}