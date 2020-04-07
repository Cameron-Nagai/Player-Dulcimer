int SOL = 5;
int LED = 16;
float delayAction = 14; //14 ms is the fastest you can pull back the solenoid.


void setup() {

  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(SOL, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  if (delayAction > 0) {
    for (int i = 0; i < 3; i++) {
  

  digitalWrite(SOL, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay (delayAction);              // wait for a second
  digitalWrite(SOL, LOW);    // turn the LED off by making the voltage LOW
  delay (500);              // wait for a second

  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay (delayAction);              // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay (500);              // wait for a second

  Serial.println(delayAction);
    }
  }

    else {
      delayAction = 1000;
    }
 }
// if (delayAction > 10) {

//
//    delay (delayAction);
//    Serial.println(delayAction);
//  }
//}
//    else {
//      delayAction = 200;
//    
//  }
//    delayAction = delayAction-10;
//    delay(1500);

//  for (int i = 0; i < 5; i++) {
//   
//    digitalWrite(SOL, HIGH);   // turn the LED on (HIGH is the voltage level)
//    digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
//
//    delay (delayAction);;              // wait for a second
//    digitalWrite(SOL, LOW);    // turn the LED off by making the voltage LOW
//    digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
    
