const int default_baud = 9600;
const int sleep_time = 1000;
const int NUMBER_OF_FIELDS = 3;
int fieldIndex;
int values[NUMBER_OF_FIELDS];

void setup()
{
    Serial.begin(default_baud);
}

void loop()
{
    if (Serial.available())
    {
        char ch(Serial.read());
        Serial.println(ch);
        if (ch >= '0' & ch <= '9')
        {
            if (fieldIndex < NUMBER_OF_FIELDS)
            {
                values[fieldIndex] = (values[fieldIndex] *  10) + ch - '0';
            } else if (ch == ',')
            {
                fieldIndex++;
            } else
            {
                for (int i =0; i < min(NUMBER_OF_FIELDS, fieldIndex + 1); i++)
                {
                    Serial.println(values[i]);
                    values[i] = 0;
                }
                fieldIndex = 0;
            }
        }
    }

    Serial.println();
    delay(sleep_time);
}