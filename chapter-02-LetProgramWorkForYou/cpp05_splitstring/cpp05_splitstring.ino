/*
split approach two.
P47

wtf, strtok_r() is deprecated Arduino 1.18.0?

*/ 
const int MAX_STRING_LEN = 20;
char stringList[] = "Peter,Paul,Mary";
char stringBuffer[MAX_STRING_LEN + 1];


void setup()
{
    Serial.begin(9600);
}

void loop()
{
    char *str;
    char *p;
    strncpy(stringBuffer, stringList, MAX_STRING_LEN);
    Serial.println(stringBuffer);

    for(
        str= strtok_rP(stringBuffer, ",", &p); 
        str; 
        str = strtok_rP(NULL, ",", &p)
    )
    {
        Serial.println(str);
    }
    delay(5000);
}