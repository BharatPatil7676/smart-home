#include <DHT.h>

#define DHTPIN 15
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE); //this is the object with the syntax class ,object name ,(prameter) 

void setup() {
  Serial.begin(115200);

  pinMode(2, OUTPUT);

  dht.begin();//here the class starts
}

void loop() {

  float temp = dht.readTemperature();//this swteps take the temperature reading from dht and stores in the temp
  float hum = dht.readHumidity();//same for the humidity

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println(" C");//println helps to  move to the nxt line.

  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.println(" %");

  if (temp > 35) {        
    digitalWrite(2, HIGH);
  }
  else {
    digitalWrite(2, LOW);
  }

  delay(2000);
}
