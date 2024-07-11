//pins used 
cont int ledPowerPin1 = 25;
cont int ledPowerPin2 = 33;
cont int ledPowerPin3 = 15;

void setup() {
  pinMode(ledPowerPin1, OUTPUT);
  pinMode(ledPowerPin2, OUTPUT);
  pinMode(ledPowerPin3, OUTPUT);
  serial.begin(11500);
  serial.println("Igutoit jennifer");
}

void loop() {
  //ledPowerPin1
  digitalWrite(ledPowerPin1, HIGH);
  delay(3000);
  digitalWrite(ledPowerPin1,LOW;
  delay(2000);

  //ledPowerPin2
  digitalWrite(ledPowerPin2, HIGH);
  delay(4000);
  digitalWrite(ledPowerPin2,LOW);
  delay(3000);

  //ledPowerPin3
  digitalWrite(ledPowerPin3, HIGH);
  delay(5000);
  digitalWrite(ledPowerPin3,LOW);
  delay(4000);
}
