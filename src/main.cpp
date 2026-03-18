//All of our code will go here. We only need the one file.
#include <Arduino.h>


// put function declarations here:
int myFunction(int, int);

  //Board will run this automatically once when it is plugged in. If we were connecting to wifi for example, it would go here
void setup() {
  //DO NOT PUT ANYTHING ABOVE THIS
  Serial.begin(115200); //This is to match the rate of the computer and the Arduino
  delay(100); //This is to add a delay, so the computer doesnt go crazy
}

//This is our main function. Anything typed here will run IN A LOOP until unplugged
void loop() {
   Serial.println("Test"); //our "serial" is our terminal. Things will print here, so that we can write code even if somebody doesnt have the arduino on them
   delay(1000); //Delay so again it doesnt print like crazy
}

//put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}