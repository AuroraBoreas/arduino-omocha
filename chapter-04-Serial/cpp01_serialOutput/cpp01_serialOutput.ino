const int default_baud = 9600;
const int sleep_time = 500;

void setup()
{
    // baud: 每秒钟传输的bit数的量度。
    // 9600波特率 ≒ 1000 char per second
    Serial.begin(default_baud);
}

int number;

void loop()
{
    Serial.print("The number is ");
    Serial.println(number);

    Serial.println();
    delay(sleep_time);
    number++;
}