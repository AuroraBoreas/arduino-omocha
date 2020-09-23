void setup()
{
    Serial.begin(9600);
}

const char num_break = 50;
const char num_random = 10;
const int num_sleep = 50;
int loop_count;
int break_count;

void loop()
{
    int uLimit = 100;
    while (uLimit > 0)
    {
        Serial.print(".");
        Serial.print(uLimit);
        delay(num_sleep);
        if (uLimit == num_break) 
        { 
            Serial.print(".BREAK!");
            break_count++;
            break; 
        }
        uLimit -= random(num_random);
    }
    loop_count++;
    Serial.print(".DONE...");
    float r = static_cast<float>(break_count) / loop_count;
    Serial.print(break_count);
    Serial.print("/");
    Serial.print(loop_count);
    Serial.print("=");
    Serial.println(r);

}