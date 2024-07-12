const ledPowerPin2 =5
const ledPowerPin3 =27
const ledPowerPin4 =36 
void setup() {
  pinMode(ledPowerPin2, OUTPUT);
  pinMode(ledPowerPin3, OUTPUT);
  pinMode(ledPowerPin4, OUTPUT);
  Serial.begin(115200);
  Serial.println("LED is fun");

}

void loop() {
  digitalWrite(ledPowerPin2, HIGH);
  delay(2000);
  digitalWrite(ledPowerPin2,LOW);


  digitalWrite(ledPowerPin3, HIGH);
  delay(3000);
  digitalWrite(ledPowerPin3, LOW);
  delay(3000);

  digitalWrite(ledPowerPin4, HIGH );
  delay(4000);
  digitalWrite(ledPowerPin4, LOW);
  delay(4500);

}
