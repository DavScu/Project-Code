/*
 * Robotics with the BOE Shield - TestLeftIR
 * Display 1 if the left IR detector does not detect an object,
 * or 0 if it does.
 */

void setup()                                 // Built-in initialization block
{
  tone(4, 3000, 1000);                       // Play tone for 1 second
  delay(1000);                               // Delay to finish tone

  pinMode(3, INPUT);  pinMode(2, OUTPUT);   // Left IR LED & Receiver
  pinMode(8, INPUT);  pinMode(7, OUTPUT);
  Serial.begin(9600);                        // Set data rate to 9600 bps
}  



void loop()                                  // Main loop auto-repeats
{
//  int irLeft = irDetect(2, 3, 30000);       // Check for object
//
//  Serial.println(irLeft);                    // Display 1/0 no detect/detect
//
//  delay(100);                                // 0.1 second delay
  int irLeft = irDetect(2, 3, 30000);
  Serial.print(irLeft);
  Serial.print(" ");
  int irRight = irDetect(7, 8, 30000);
  Serial.print(irRight);
  Serial.println();
  delay(100);
}

//void isIR()
//{
//  int irLeft = irDetect(2, 3, 30000);
//  Serial.print(irLeft);
//  Serial.print(" ");
//  int irRight = isDetect(10, 9, 30000);
//  Serial.print(isRight);
//}



// IR Object Detection Function

int irDetect(int irLedPin, int irReceiverPin, long frequency)
{
  tone(irLedPin, frequency, 8);              // IRLED 38 kHz for at least 1 ms
  delay(1);                                  // Wait 1 ms
  int ir = digitalRead(irReceiverPin);       // IR receiver -> ir variable
  delay(1);                                  // Down time before recheck
  return ir;                                 // Return 1 no detect, 0 detect
}  
