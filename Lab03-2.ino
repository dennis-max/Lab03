const byte potPin = 14;
int val;
float sensorValue;
float sensorVoltage;
int i;

void setup() {
 Serial.begin(9600);
 
}

void loop() {
  val = analogRead(potPin);
  Serial.print(val);
  Serial.print(",");
  
  for (i=0;i<=2.5;i++)
  {
  sensorValue = 0.7* sensorValue + 0.3* analogRead(14);
  sensorVoltage = sensorValue * 2.5 / 4095;
  
  }
  Serial.println(sensorVoltage);
  Serial.println(sensorValue);
  delay(500);
}
