#define TEMP_SENSOR A0
#define HEART_SENSOR A1
#define LED 8
#define BUZZER 9

void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(BUZZER,OUTPUT);
}

void loop() {
  int TempValue = analogRead(TEMP_SENSOR);

  int PulseValue = analogRead(HEART_SENSOR);

  Serial.print("Temperature = ");
  Serial.print(TempValue);
  Serial.print("  c");

  Serial.print("Heart Rate: ");
  Serial.print(PulseValue);

  if(TempValue>40 || PulseValue>700)
  {
    digitalWrite(LED,HIGH);
    digitalWrite(BUZZER,HIGH);

    Serial.println("PATIENT CONDITION ABNORMAL");
    
  }
  else{
    digitalWrite(LED,LOW);
    digitalWrite(BUZZER,LOW);

    Serial.println("PATIENT CONDITION NORMAL");
  }
delay(1000);
  
}
