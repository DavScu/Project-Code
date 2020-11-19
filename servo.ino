#include <Servo.h>
Servo myservo;
int angle = 0;

void setup() 
{
  // put your setup code here, to run once:
  myservo.attach(9);
  //down();
  //up();
}
 
void down()
{

  myservo.write(100);
 
  
  for (angle = 100; angle <= 190; angle += 1) {
      myservo.write(angle);
      delay(600);    

  }
  delay(900);
}

void up()
{
    myservo.write(100);
 
  
  for (angle = 100; angle <= 190; angle -= 1) {
      myservo.write(angle);
      delay(600);    

  }
  delay(900);
}

void loop() {
  // put your main code here, to run repeatedly:

}
