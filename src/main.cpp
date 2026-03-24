//All of our code will go here. We only need the one file.
#include <Arduino.h>


// put function declarations here:
void blink(int i);

  //Board will run this automatically once when it is plugged in. If we were connecting to wifi for example, it would go here
void setup() {
  //DO NOT PUT ANYTHING ABOVE THIS
  Serial.begin(115200); //This is to match the rate of the computer and the Arduino
  delay(100); //This is to add a delay, so the computer doesnt go crazy
  pinMode(11, OUTPUT); // Set Pin 13 as output

}

//This is our main function. Anything typed here will run IN A LOOP until unplugged
void loop() {
   delay(1000); //Delay so again it doesnt print like crazy
  blink(1);
  Serial.println("1"); //our "serial" is our terminal. Things will print here, so that we can write code even if somebody doesnt have the arduino on them
    delay(1000); 
  blink(7);
  Serial.println("7");
    delay(1000); 
  blink(8);
  Serial.println("8");
    delay(1000); 
  blink(2);
  Serial.println("2");
    delay(1000); 
  blink(5);
  Serial.println("5");
    delay(3000);

}

//put function definitions here:
void blink(int i){
  int k;
  for (k = 0; k < i; k++){
    digitalWrite(11, HIGH); // Turn LED on
    delay(100);                     // Wait 1 second
    digitalWrite(11, LOW);  // Turn LED off
    delay(500); 
  }
}