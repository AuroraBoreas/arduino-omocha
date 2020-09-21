/*
split comma-delimiter text
*/ 

String text = "Peter, Paul, Mary";
String message = text;
const String comma = ",";
const int commaNotFound = -1;
int commaPosition;

void setup()
{
    // ;
    Serial.begin(9600);
    Serial.println(message);

    do {
        commaPosition = message.indexOf(comma);
        Serial.print("comma position: ");
        Serial.println(commaPosition);
        if (commaPosition != commaNotFound)
        {
            Serial.println(message.substring(0, commaPosition));
            message = message.substring(commaPosition+1, message.length());
        } else {
            if (message.length() > 0) { Serial.println(message); }
        }
    } while (commaPosition >= 0);
}

void loop()
{
    // ;
}