
int i = 1;
int j = 2;

const int default_baud = 9600;

void setup()
{
    Serial.begin(default_baud);
}

const int sleep_time = 10000;

void loop()
{
    Serial.print("i = ");
    Serial.print(i);
    Serial.print(" and j = ");
    Serial.println(j);

    if (i < j) { Serial.println("i < j"); }
    if (i <= j) { Serial.println("i <= j"); }
    if (i != j) { Serial.println("i != j"); }
    if (i == j) { Serial.println("i == j"); }
    if (i >= j) { Serial.println("i >= j"); }
    if (i > j) { Serial.println("i > j"); }

    Serial.println();
    i++;
    if (i > j +1) { delay(sleep_time); }
}