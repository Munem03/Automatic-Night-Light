void setup() {
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A3);
  
  Serial.print("Light Sensor Value=");
  Serial.println(sensorValue);
  
  if (sensorValue <= 900) {
    digitalWrite(9, HIGH);  
  } else {
    delay(3000);  
    sensorValue = analogRead(A3);  
       if (sensorValue >= 900) {
      digitalWrite(9, LOW);  
    }
  }

  delay(500);  
}
