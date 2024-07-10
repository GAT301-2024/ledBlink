#define ledPowerPin 25
//const int ledPowerPin = 25;


void setup() {
 pinMode(ledPowerPin, OUTPUT);
 Serial.begin(115200);
 Serial.println("initializing program...");
 

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(ledPowerPin, HIGH);
 Serial.println("led on");
 delay(3000);
 digitalWrite(ledPowerPin, LOW);
 delay(1000);
 
}
