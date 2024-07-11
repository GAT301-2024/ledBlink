const int led_power_pin1 = 13;
const int led_power_pin2 = 26;
const int led_power_pin3 = 27;
 
void setup() {

 pinMode(led_power_pin1, OUTPUT); 
 pinMode(led_power_pin2, OUTPUT); 
 pinMode(led_power_pin3, OUTPUT); 
 Serial.begin(115200);
 Serial.println("My first arduino program");
}

void loop() {

// 1 signifys high(on) and 0 for low(off)
   digitalWrite(led_power_pin1, 1);
   delay(1000);
   digitalWrite(led_power_pin1, 0);
   delay(1000);

   digitalWrite(led_power_pin2, 1);
   delay(1000);
   digitalWrite(led_power_pin2, 0);
   delay(1000);

   digitalWrite(led_power_pin3, 1);
   delay(1000);
   digitalWrite(led_power_pin3, 0);
   delay(1000);
   
}
