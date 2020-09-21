/*
basic strings
*/ 

String text1 = "This string";
String text2 = "has more text";
String text3;

void setup()
{
    // s.length()
    Serial.begin(9600);
    Serial.print("is ");
    Serial.print(text1.length());
    Serial.println(" characters long.");

    Serial.print("text2 is ");
    Serial.print(text2.length());
    Serial.println(" characters long.");

    // s.concat()
    text1.concat(text2);
    Serial.println("text1 now contains:");
    Serial.println(text1);
}

void loop()
{
    // ;
}