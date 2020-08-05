#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

//define the 2 servodrivers, address defined by solder points
Adafruit_PWMServoDriver pwm1 = Adafruit_PWMServoDriver(0x40);
Adafruit_PWMServoDriver pwm2 = Adafruit_PWMServoDriver(0x41);

#define SERVOMIN 110 //(0 DEGREES)
#define SERVOMAX 450 //(180 DEGREES)
//maybe find minmax for all 18 servos

#define SERVO_FREQ 50 //frequency for analog servos

void setup() {
  Serial.begin(9600);

  pwm.begin();
  pwm.setOscillatorFrequency(27000000); //no clue what this does but im too scared to remove it
  pwm.setPWMFreq(SERVO_FREQ);

  //example of how to operate the servos to a specific degree point
  //pwm1.setPWM(servoNum,0, map(degrees, 0 , 180, SERVOMIN, SERVOMAX));
  //pwm2.setPWM(servoNum,0, map(degrees, 0 , 180, SERVOMIN, SERVOMAX));
}

void loop() {
    
}
