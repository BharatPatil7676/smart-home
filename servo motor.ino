#include <ESP32Servo.h>

Servo door;//*creates the object like the int age,float temp and servo=data type ,door is te name



void setup() {

  Serial.begin(115200);

  pinMode(4, INPUT);//this is the point where you will connect the button for operating

  door.attach(18);//this means the sservo motor is connected to GPIO 18

  door.write(0);//intilazethe door sholud be at 0 degree

  Serial.println("Smart Door System Started");
}

void loop() {

  int buttonState = digitalRead(4);//its gets the inpt from the button

  if (buttonState == HIGH) {

    door.write(90);//rotates the door by the 90 degree

    Serial.println("Door Open");

    delay(2000);
  }

  else {

    door.write(0);

    Serial.println("Door Closed");//see downside threre are some important points regading connection

    delay(2000);
  }
}
//*some Important points:
// *BUtton in the WOKWI initial it is in 0 state to make it into 1 state long hold the button
//* button has 4 pins left and right pins 1.1L and 1.2L these two are the left pins both are saame only the second one is a duplicate of first one
 // 2.1R and 2.2R are the right pins
//*while connecting the buttons make sure that you connect alternately means one pin from left and another from the right*\



