const int led1 = 5;
const int led2 = 8;
const int led3 = 13;

void setup(){
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(15200);
  Serial.println("Iniatialising program");
}

void loop(){
  digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(300);
  digitalWrite(led2, HIGH);
  delay(300);
  digitalWrite(led2, LOW);
  delay(300);
  digitalWrite(led3, HIGH);
  delay(300);
  digitalWrite(led3, LOW);
  delay(300);
}
