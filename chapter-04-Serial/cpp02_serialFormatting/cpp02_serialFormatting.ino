const int default_baud = 9600;
const int sleep_time = 1000;

void setup()
{
    Serial.begin(default_baud);
}

char chrVal = 65;
byte byteVal = 65;
int intVal = 65;
float floatVal = 65.0;

void loop()
{
    // Serial.flush() 等待所有要传出的数据被发送。
    // Serial.write()
    // Serial.print()
    // Serial.peek() “偷看”在接收缓冲器中的下一个字符。字符不会从缓冲区中删除。
    // Serial.read() 读取后，字符从缓冲区中删除。
    
    Serial.print("chrVal  : ");
    Serial.print(chrVal);
    Serial.print("\t");
    Serial.write(chrVal);
    Serial.print("\t");
    Serial.println(chrVal, DEC);

    Serial.print("byteVal : ");
    Serial.print(byteVal);
    Serial.print("\t");
    Serial.write(byteVal);
    Serial.print("\t");
    Serial.println(byteVal, DEC);

    Serial.print("intVal  : ");
    Serial.print(intVal);
    Serial.print("\t");
    Serial.print(intVal, DEC);
    Serial.print("\t");
    Serial.print(intVal, HEX);
    Serial.print("\t");
    Serial.print(intVal, OCT);
    Serial.print("\t");
    Serial.println(intVal, BIN);

    Serial.print("floatVal: ");
    Serial.println(floatVal);

    Serial.println();
    delay(sleep_time);
    chrVal++;
    byteVal++;
    intVal++;
    floatVal += 1;
}