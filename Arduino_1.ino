#include <Servo.h>                      // Include servo library

Servo servoLeft;                        // Declare left and right servos

Servo servoRight;

void setup()                            // Built-in initialization block
{
    servoLeft.attach(13);               // Attach left signal to pin 13
    servoRight.attach(12);              // Attach right signal to pin 12

    

    
}

void loop()                             // Main loop auto-repeats
{

  left();
  delay(2000);
 
}

void forward(){
    // Full speed forward
    servoLeft.attach(13);               // Attach left signal to pin 13
    servoRight.attach(12);              // Attach right signal to pin 12
    
    servoLeft.writeMicroseconds(1700);  // Left wheel counterclockwise
    servoRight.writeMicroseconds(1300); // Right wheel clockwise
    delay(1000);
    
    servoLeft.detach();
    servoRight.detach();
    }                       // ...for 3 seconds

void right(){
    // Turn right
    servoLeft.attach(13);               // Attach left signal to pin 13
    servoRight.attach(12);              // Attach right signal to pin 12
    
    servoLeft.writeMicroseconds(1500);
    servoRight.writeMicroseconds(1300);
    delay(500);
    
    servoLeft.detach();
    servoRight.detach();
    }

void left(){
    // Turn left
    servoLeft.attach(13);               // Attach left signal to pin 13
    servoRight.attach(12);              // Attach right signal to pin 12
    
    servoLeft.writeMicroseconds(1700);
    servoRight.writeMicroseconds(1700);
    delay(500);
    
    servoLeft.detach();
    servoRight.detach();
    }


