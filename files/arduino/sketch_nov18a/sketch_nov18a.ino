int but = 27;
int mot1 = 14;
int mot2 = 21;

void setup() {
  // put your setup code here, to run once:
  pinMode(mot1, OUTPUT);
  pinMode(mot2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(mot1, HIGH);
  digitalWrite(mot2, LOW);
  Serial.println("H L");
  delay(1000);
  digitalWrite(mot1, LOW);
  digitalWrite(mot2, HIGH);
  Serial.println("L H");
  delay(1000);
  digitalWrite(mot1, HIGH);
  digitalWrite(mot2, HIGH);
  Serial.println("H H");
  delay(1000);
  digitalWrite(mot1, LOW);
  digitalWrite(mot2, LOW);
  Serial.println("L L");
  delay(1000);


}
