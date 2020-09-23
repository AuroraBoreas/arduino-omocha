const int default_baud = 9600;
const int sleep_time = 10000;
const int sensorPin = 0;

void setup()
{
    Serial.begin(default_baud);
}

int randNum;

void loop()
{
    //random
    Serial.println("w/o seeding...");
    Serial.println("Print 20 random numbers btwn 0 and 9");
    for(int i=0; i < 20; i++)
    {
        randNum = random(10); // range() in python, not randint()
        Serial.print(randNum);
        Serial.print(" ");
    }
    Serial.println();
    Serial.println("Print 20 random numbers btwn 2 and 9");
    for(int i=0; i < 20; i++)
    {
        randNum = random(2, 10); // range() in python, not randint()
        Serial.print(randNum);
        Serial.print(" ");       
    }

    // seed
    Serial.println("\nwith seeding...");
    randomSeed(1234); // same mechnism in python etc;
    Serial.println("Print 20 random numbers btwn 0 and 9");
    for(int i=0; i < 20; i++)
    {
        randNum = random(10); // range() in python, not randint()
        Serial.print(randNum);
        Serial.print(" ");
    }
    Serial.println();

    // random seeds
    randomSeed(analogRead(sensorPin));
    Serial.println("Print 20 random numbers btwn 0 and 9 after floating-seed");
    for(int i=0; i < 20; i++)
    {
        randNum = random(10); // range() in python, not randint()
        Serial.print(randNum);
        Serial.print(" ");
    }
    Serial.println();
    Serial.println();

    delay(sleep_time);

}