/*
swap
*/ 

int x;
int y;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    x = random(10);
    y = random(10);
    Serial.print("the value of x and y before swapping are: ");
    Serial.print(x);
    Serial.print(",");
    Serial.println(y);
    swap2(x, y);

    Serial.print("the value of x and y after swapping are: ");
    Serial.print(x);
    Serial.print(",");
    Serial.println(y);

    delay(1000);  

}

void swap()
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

void swap2(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}