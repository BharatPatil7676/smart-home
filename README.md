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

   

   smart home working and flow( this is temporary i may change )
   sensors →ESP32 → Decision → Actuator


this is the work flow 
   Start
     ↓
Read DHT22
    ↓
Read PIR Sensor
    ↓
Process Data
    ↓
Control Lights
    ↓
Control Door
    ↓
Control Alarm
    ↓
Repeat Forever (before this we can have some more steps like mobile monitor where you will recive nad send the data tp ESP32)
   







