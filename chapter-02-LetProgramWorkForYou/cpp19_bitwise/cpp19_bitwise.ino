const int default_baud = 9600;

void setup()
{
    Serial.begin(default_baud);
}

const int sleep_time = 10000;

void loop()
{
    char a = 3; // 0011
    char b = 1; // 0001

    Serial.print("3 & 1 == ");
    Serial.print(a & b); // 1
    Serial.print(" decimal, or in binary:");
    Serial.println(a & b, BIN); // 0001

    Serial.print("3 | 1 == ");
    Serial.print(a | b); // 3
    Serial.print(" decimal, or in binary:");
    Serial.println(a | b, BIN); // 0011

    Serial.print("3 ^ 1 == ");
    Serial.print(a ^ b); // 2
    Serial.print(" decimal, or in binary:");
    Serial.println(a ^ b, BIN); // 0010

    Serial.print("~3 == ");
    Serial.print(~a); // -4; ~n = -n-1
    Serial.print(" decimal, or in binary:");
    Serial.println(~a, BIN); // 1100

    delay(sleep_time);
}