#include <PCA9685.h>

/**********************************************************************
  Product     : Freenove 4WD Car for ESP32
  Author      : S.R.Norr edit of www.freenove.com
  Modification: 2024/01/25
**********************************************************************/
#include "Freenove_4WD_Car_For_ESP32.h"

void setup()
{
  Serial.begin(57600);
  PCA9685_Setup();       //Initializes the chip that controls the motor
}

void loop()
{
// Forward Rotation Test

  Motor_Move(1000, 0, 0, 0);     //Test M1 FWD
  Serial.println("M1 FWD");
  delay(1000);
  Motor_Move(0, 0, 0, 0);        //stop
  delay(2200);
  Motor_Move(0, 1000, 0, 0);    //Test M2 FWD
  Serial.println("M2 FWD");
  delay(1000);
  Motor_Move(0, 0, 0, 0);       //stop
  delay(2200);
  Motor_Move(0, 0, 1000, 0);   //Test M3 FWD
  Serial.println("M3 FWD");
  delay(1000);
  Motor_Move(0, 0, 0, 0);      //stop
  delay(2200);
  Motor_Move(0, 0, 0, 1000);   //Test M4 FWD
  Serial.println("M4 FWD");
  delay(1000);
  Motor_Move(0, 0, 0, 0);      //stop
  delay(2200);

// Reverse Rotation Test

  Motor_Move(-1000, 0, 0, 0);     //Test M1 REV
  Serial.println("M1 REV");
  delay(1000);
  Motor_Move(0, 0, 0, 0);        //stop
  delay(2200);
  Motor_Move(0, -1000, 0, 0);    //Test M2 REV
  Serial.println("M2 REV");
  delay(1000);
  Motor_Move(0, 0, 0, 0);       //stop
  delay(2200);
  Motor_Move(0, 0, -1000, 0);   //Test M3 REV
  Serial.println("M3 REV");
  delay(1000);
  Motor_Move(0, 0, 0, 0);      //stop
  delay(2200);
  Motor_Move(0, 0, 0, -1000);   //Test M4 REV
  Serial.println("M4 REV");
  delay(1000);
  Motor_Move(0, 0, 0, 0);      //stop
  delay(2200);
}
