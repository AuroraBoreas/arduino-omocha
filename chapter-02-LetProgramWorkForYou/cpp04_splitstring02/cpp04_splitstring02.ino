/*
understand s.indexOf()
*/ 

String a = "hello world";
String b = "hello, world";
const String comma = ",";
int commaPosition;

void setup()
{
    Serial.begin(9600);
    // what returns if a string have no commma?
    // why? 
    // nothing special. source code determines.
    // if (temp == NULL) return -1;
    Serial.println(a);
    Serial.print("comma position = ");
    commaPosition = a.indexOf(comma);
    Serial.println(commaPosition);
    // what returns if a string have no commma?
    Serial.println(b);
    Serial.print("comma position = ");
    commaPosition = b.indexOf(comma);
    Serial.println(commaPosition);

}

void loop()
{

}