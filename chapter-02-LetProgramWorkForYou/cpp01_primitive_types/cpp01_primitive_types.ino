/*

Table: types in arduino(C/C++)

+-----------------+-----------------------------+-------------------------------------------+
| type            | scope                       | usage                                     |
+=================+=============================+===========================================+   
| int             | -32768 ~ 32767              | 正/负整数                                  |
+-----------------+-----------------------------+-------------------------------------------+
| unsigned int    | 0 ~ 65535                   | 整数                                      |
+-----------------+-----------------------------+-------------------------------------------+
| long            | -2147483648 ~ 2147483647    | 更大范围的正/负整数                         |
+-----------------+-----------------------------+-------------------------------------------+
| unsigned long   | 4294967295                  | 更大范围的整数                             |
+-----------------+-----------------------------+-------------------------------------------+
| float           | ~                           | 用来近似真实世界的测量值                    |
+-----------------+-----------------------------+-------------------------------------------+
| double          | ~                           | same as float in arduino                  |
+-----------------+-----------------------------+-------------------------------------------+
| boolean         | false or true               | 真/假                                     |
+-----------------+-----------------------------+-------------------------------------------+
| char            | -128 ~ 127                  | 单个字符, 也可以表示-128和127之间的有符号值  |
+-----------------+-----------------------------+-------------------------------------------+
| Byte            | 0 ~ 255                     | 类似char, 但无符号                         |
+-----------------+-----------------------------+-------------------------------------------+


*/

float value = 1.1;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    value = value - 0.1;
    if (value == 0)
    {
        Serial.println("the value is exactly zero");
    } else if (almostEqual(value, 0)) 
    {
        Serial.println("the value");
        Serial.println(value, 7);
        Serial.println("is almost equal to zero");
    } else
    {
        Serial.println(value);
    }
    
    delay(100);
}

boolean almostEqual(float a, float b)
{
    const float _delta = 0.00001;
    if (a == 0) { return b <= _delta; }
    if (b == 0) { return a <= _delta; }
    return fabs((a - b) / max(fabs(a), fabs(b))) <= _delta;

}
