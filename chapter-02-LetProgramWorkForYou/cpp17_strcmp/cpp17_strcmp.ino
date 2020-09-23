
char string1[] = "left";
char string2[] = "right";
const int default_baud = 9600;

void setup()
{
    Serial.begin(default_baud);
}

const int sleep_time = 1000;

void loop()
{
    if (strcmp(string1, string2) == 0)
    {
        Serial.println("string1 == string2");
    } else
    {
        Serial.println("string1 != string2");
    }
    delay(sleep_time);
}