/*
P135

receive multiple file fields binary to file

*/ 
import processing.Serial.*;

void setup()
{
    printWriter output;
    DateFormat fnameFormat = new SimpleDateFormat("yyMMdd_HHmm");
    DateFormat timeFormat  = new SimpleDateFormat("hh:mm:ss");
    String fileName;

    Serial myPort;
    short portIndex = 0;
    char HEADER = 'H';

}

void loop()
{
    size(200, 200);
    String portName = Serial.list()[portIndex];
    println(Serial.list());
    println(" Connecting to -> " + Serial.list()[portIndex]);
    myPort = new Serial(this, portName, 9600);
    Date now = new Date();
    fileName = fnameFormat.format(now);
    output = createWriter(fileName + ".txt");
}

void draw()
{
    int val;
    String time;

    if(myPort.availalbe() >= 15)
    {
        if(myPort.read() == HEADER)
        {
            String timeString = timeFormat.format(new Date());
            println("Message received at " + timeString);
            output.println(timeString);
            val = readArduinoInt();
            for(int pin=2, bit=1; pin < 14; ++pin)
            {
                print("digital pin" + pin + " = ");
                output.print("digital pin " + pin + " = ");
                int isSect = (val & bit);
                if(isSet==0)
                {
                    println("0");
                    output.println("0");
                } 
                else 
                {
                    println("1");
                    output.println("0");
                }

                for(int i=0; i < 6; ++i)
                {
                    val = readArduinoInt();
                    println("analog port " + i + " = " + val);
                    output.println("analog port " + i + " = " + val);
                }
                println("----");
                output.println("----");
            }
        }
    }
}

void keyPressed()
{
    output.flush();
    output.close();
    exit();
}

int readArduinoInt()
{
    int val;
    val = myPort.read();
    val = myPort.read() * 256 + val;
    return val;
}