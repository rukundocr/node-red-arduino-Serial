
int newval = 0;
void setup() {
  // Initialize Serial port
  Serial.begin(9600);
}

void loop() {
  newval = newval+4;
  if(newval == 500){
    newval=0;
    }
  int fixed =40;
  int sensorValue = analogRead(A0);
   int sensorValue1 = analogRead(A1);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
 // float voltage = sensorValue * (5.0 / 1023.0);
 Serial.print("{\"SENSOR1\":");
 Serial.print(sensorValue);
 Serial.print(",\"SESNOR2\":");
 Serial.print(fixed);
 Serial.print(",\"SESNOR3\":");
 Serial.print(sensorValue1);
 Serial.println("}");
 delay(2000);
}


