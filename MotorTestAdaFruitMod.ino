
// Adafruit Motor shield library
// copyright Adafruit Industries LLC, 2009
// this code is public domain, enjoy!

#include <AFMotor.h>

AF_DCMotor motorDC1(1,MOTOR12_64KHZ);//MOTOR12_1KHZ MOTOR12_2KHZ MOTOR12_8KHZ MOTOR12_64KHZ
                                     //MOTOR34_1KHZ
void setup() {

}

void loop() 
{
  motorDC1.setSpeed(200);//0-255
  motorDC1.run(FORWARD);
  delay(3000);

  motorDC1.setSpeed(100); 
  motorDC1.run(BACKWARD);
  delay(3000);
  
  motorDC1.run(RELEASE);
  delay(3000);
}
