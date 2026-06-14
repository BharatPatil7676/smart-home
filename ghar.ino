
void setup() {
Serial.begin(115200);
pinMode(7,OUTPUT);
 Serial.println("ENter the mode:"); 
}

void loop() {
  
  if(Serial.available())
{
 char data=Serial.read();
 Serial.print("Recived: ");
 Serial.println(data);
 if(data=='1'){
  digitalWrite(7,HIGH);
 }
  else{
    digitalWrite(7,LOW);
 }}
 }
