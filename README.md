# smart-home
sensors>>ESp-32>>wifi>>mobile.(working)
I am using;
**2 leds 
**DHT22 sensors for the temptature and humidity
**buzzer for the alaram
**servo motor for rotatins


project flow:
   mobile
   ESP-32
   Sensors
   leds,motor,buzzer

   mobile(whenever the user opens the phone and press the turn on light,fan,etc)
   ESP 32(recives the commond then controls the light(on/off),motor)
   sensors(whenever the temp exceedes the light turn off automatically)
   servo motor(rotates anything by specific angle)





GPIO = General Purpose Input Output
A GPIO pin can work as:
1. Input
ESP32 reads signals from a device.
Examples:
Push button
Sensor
Switch
Plain text
Button → ESP32
ESP32 receives information.
2. Output
ESP32 sends signals to a device.
Examples:
LED
Buzzer
Relay
Plain text
ESP32 → LED
ESP32 controls the device.
   
