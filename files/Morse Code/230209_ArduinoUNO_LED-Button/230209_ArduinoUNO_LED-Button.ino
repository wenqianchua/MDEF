const int ledPin = 12;// We will use the internal LED
const int buttonPin = 7;// the pin our push button is on

void setup()
{
  pinMode(ledPin,OUTPUT); // Set the LED Pin as an output
  pinMode(buttonPin,INPUT); // Set the Tilt Switch as an input
}

void loop()
{
  int digitalVal = digitalRead(buttonPin); // Take a reading

  if(LOW == digitalVal)
  {
    digitalWrite(ledPin,LOW); //Turn the LED off
  }
  else
  {
    digitalWrite(ledPin,HIGH);//Turn the LED on
  }
}