include <ESP32Servo.h>

Servo door;



void setup() {

  Serial.begin(115200);

  pinMode(4, INPUT);

  door.attach(18);

  door.write(0);

  Serial.println("Smart Door System Started");
}

void loop() {

  int buttonState = digitalRead(4);

  if (buttonState == HIGH) {

    door.write(90);

    Serial.println("Door Open");

    delay(200);
  }

  else {

    door.write(0);

    Serial.println("Door Closed");

    delay(5000);
  }
}
