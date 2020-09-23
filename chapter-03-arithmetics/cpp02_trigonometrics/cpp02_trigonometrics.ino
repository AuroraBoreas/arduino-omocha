const int default_baud = 9600;
const int sleep_time = 1000;

void setup()
{
    Serial.begin(default_baud);
}

void loop()
{
    float deg = random(360);
    float rad = deg * PI / 180;
    Serial.print("deg = ");
    Serial.println(deg);
    // trigonometrics
    Serial.print("its rad = ");
    Serial.println(rad);
    Serial.print("sin(rad) = ");
    Serial.println(sin(rad));
    Serial.print("cos(rad) = ");
    Serial.println(cos(rad));
    // DEG_TO_RAD, RAD_TO_DEG
    Serial.print("deg = ");
    Serial.println(rad * RAD_TO_DEG);
    Serial.print("rad = ");
    Serial.println(deg * DEG_TO_RAD);

    Serial.println();
    delay(sleep_time);
}
