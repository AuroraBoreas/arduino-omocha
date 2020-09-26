const int default_baud = 9600;
const int sleep_time = 1000;

void setup()
{
    Serial.begin(default_baud);
}


const int NUMBER_OF_FIELDS = 3;
int fieldIndex = 0;
int values[NUMBER_OF_FIELDS];

void loop()
{
    if (Serial.available())
    {
        for (fieldIndex = 0; fieldIndex < NUMBER_OF_FIELDS; fieldIndex++)
        {
            values[fieldIndex] = Serial.parseInt();
        }
        Serial.print(fieldIndex);
        Serial.println("fields received: ");
        for (int i = 0; i < fieldIndex; i++)
        {
            Serial.println(values[i]);
        }
        fieldIndex = 0;
    }    
    Serial.println();
    delay(sleep_time);
}