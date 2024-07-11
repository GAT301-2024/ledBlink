
const int ledPowerPin9=25;
const int ledPowerPin2=15;
const int ledPowerPin5=13;
void setup() {
  pinModel(ledPowerPin9,OUTPUT);
  pinModel(ledPowerPin2,OUTPUT);
  pinModel(ledPowerPin5,OUTPUT);
  Serial.begin(115200);

  Serial.println("initializing");
}

void loop() {
  digitalWrite(ledPowerPin9,HIGH);
  delay(3000);
  digitalWrite(ledPowerPin9,LOW);
  delay(4000);
  digitalWrite(ledPowerPin2,HIGH);
  delay(3000);
  digitalWrite(ledPowerPin2,LOW);
  delay(2000);
  digitalWrite(ledPowerPin5,HIGH);
  delay(3000);
  digitalWrite(ledPowerPin5,LOW);
  delay(6000);

}
