#define echoPin 12
#define trigPin 13
#define posMotor 21
#define negMotor 14
#define buttonPin 27

//Ultra Sonic Sensor
long duration;
int distance;

//Button
int value;    //indicates when the button is pressed (actively being pressed)
bool activated = false;

//timer
unsigned long previousMillis = 0;  // will store last time LED was updated
bool rotating = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  //Ultra Sonic Sensor
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);

  //Motor Outputs
  pinMode(posMotor, OUTPUT);
  pinMode(negMotor, OUTPUT);

  digitalWrite(21, LOW);
  digitalWrite(14, HIGH);

  //Button Input
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  //distance calculation for ultra sonic sensor
  int total = 0;
  for (int i = 0; i < 10; i++) {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
    total = total + distance;
  }
  distance = total / 10;
  if (distance < 300 && distance > 5) {
    Serial.print(distance);
    Serial.println("distance");
  }
  if (!digitalRead(buttonPin) && activated == false) {
    Serial.println("button activated");
    activated = true;
  }

  //Machine Action
  if (activated && distance < 80) {  //if counter is greater than 0 it turns on the machine. If the sensor detects you in between these distances, it moves
    digitalWrite(21, HIGH);
    digitalWrite(14, HIGH);
    delay(500);
    digitalWrite(21, LOW);
    digitalWrite(14, HIGH);
    delay(500);
    // digitalWrite(21, LOW);
    // digitalWrite(14, LOW);
    // delay(500);
    Serial.println("nervous");
    rotating = false;
  } else if (activated && distance >= 80) {  //if the counter is over one but the distance isn't between the above the motor runs for amount of time
    unsigned long currentMillis = millis();  // will store last time LED was updated
    if (!rotating) {
      Serial.println("running");
      digitalWrite(21, HIGH);
      digitalWrite(14, HIGH);
      rotating = true;
      previousMillis = currentMillis;
    }
    if (currentMillis > previousMillis + 20000){
      Serial.println("running");
      digitalWrite(21, LOW);
      digitalWrite(14, HIGH);
      rotating = false;
      activated = false;
    }
  } else {  //when the counter is 0 the machine is off
    digitalWrite(21, LOW);
    digitalWrite(14, HIGH);
    Serial.println("off");
  }
}