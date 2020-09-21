const int outputPin = 9;
const int sensorPin = 13;

const int minDuration = 1;
const int maxDuration = 10;

void setup()
{
    // only run once
    pinMode(outputPin, OUTPUT);
}

void loop()
{
    // do sth; 
    int sensorReading = digitalRead(sensorPin);
    int rate = map(sensorPin, 200, 800, minDuration, maxDuration);
    rate = constrain(rate, minDuration, maxDuration);

    digitalWrite(outputPin, HIGH);
    delay(rate);
    digitalWrite(outputPin, LOW);
    delay(rate);
}

// void main()
// {
//     init();
//     setup();
//     for(;;) {};
//     return 0;
// }