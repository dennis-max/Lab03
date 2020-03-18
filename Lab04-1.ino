const byte ledPin = 13;
int val;
void setup(){
  Serial.begin(9600);
  Serial.println("Hello," );
  Serial.print("\tLED pin is: ");
  Serial.print(ledPin);
  Serial.print("\nBYE!");
}
void loop(){
  if(Serial.available()){
    val = Serial.read();
    if(val == '1'){
      digitalWrite(7, HIGH);
      Serial.print("7 ON");
    }else if(val == '0'){
      digitalWrite(7, LOW);
      Serial.print("7 OFF");
    }
  }
}
