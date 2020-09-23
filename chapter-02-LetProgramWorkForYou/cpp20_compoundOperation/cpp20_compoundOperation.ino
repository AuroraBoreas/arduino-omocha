const int default_baud = 9600;
const int sleep_time = 10000;

void setup()
{
    Serial.begin(default_baud);
}

void loop()
{
    int a = 3;

    Serial.print("a == ");
    Serial.println(a);

    Serial.print("a += 5, a == ");
    a += 5;
    Serial.println(a);

    Serial.print("a -= 4, a == ");
    a -= 4;
    Serial.println(a);

    Serial.print("a *= 3, a == ");
    a *= 3;
    Serial.println(a);

    Serial.print("a /= 2, a == ");
    a /= 2;
    Serial.println(a);

    a = 11; // reset the value of a; 1011
    Serial.print("a >>= 2, a == ");
    a >>= 2;
    Serial.println(a); // 2
    
    a = 11; // reset the value of a; 1011
    Serial.print("a <<= 2, a == ");
    a <<= 2;
    Serial.println(a); // b101100 = d44

    a = 11; // reset the value of a; 1011
    Serial.print("a &= 2, a == "); // 0010
    a &= 2; //0010
    Serial.println(a); // 2

    a = 11; // reset the value of a; 1011
    Serial.print("a |= 2, a == "); // 0010
    a |= 2; //1011
    Serial.println(a); // 11

    delay(sleep_time);
}