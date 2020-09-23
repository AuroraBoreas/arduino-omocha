
const int default_baud = 9600;
const int sleep_time = 10000;

void setup()
{
    Serial.begin(default_baud);
}

void loop()
{
    const char offset = 1;
    int a = random(10) + offset;
    int b = random(10) + offset;

    Serial.print("a = ");
    Serial.print(a);
    Serial.print(", b = ");
    Serial.println(b);

    //  +, -, *, /
    Serial.print("a + b = ");
    Serial.println(a + b);
    Serial.print("a - b = ");
    Serial.println(a - b);
    Serial.print("a * b = ");
    Serial.println(a * b);
    Serial.print("a / b = ");
    Serial.println(a / b);
    // mod, abs,
    Serial.print("a % b = ");
    Serial.println(a % b);
    Serial.print("abs(a) = ");
    Serial.println(abs(a));
    // contrain()
    Serial.print("constrain(a, 5, 10) = ");
    Serial.println(constrain(a, 5, 10));
    // min, max
    Serial.print("min(a, b) = ");
    Serial.println(min(a, b));
    Serial.print("max(a, b) = ");
    Serial.println(max(a, b));
    // square, sqrt
    Serial.print("pow(a, b) = ");
    Serial.println(pow(a, b));
    Serial.print("sqrt(a) = ");
    Serial.println(sqrt(a));
    // floor, ceil
    Serial.print("floor(a) = ");
    Serial.println(floor(a));
    Serial.print("ceil(a) = ");
    Serial.println(ceil(a));

    Serial.println();
    delay(sleep_time);
}