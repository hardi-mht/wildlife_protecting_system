int IRSensor = 13; // connect ir sensor to arduino pin 2
int LED = 12; // conect Led to arduino pin 13



void setup() 
{


  Serial.begin(115200);
  pinMode (IRSensor, INPUT); // sensor pin INPUT
  pinMode (LED, OUTPUT); // Led pin OUTPUT
}

void loop()
{
  int statusSensor = digitalRead (IRSensor);
  
  if (statusSensor == 1){
    Serial.println("Motion Absent");
    digitalWrite(LED, LOW); // LED LOW
    
  }
  
  else
  {
    Serial.println("Motion Detected");
    digitalWrite(LED, HIGH); // LED High
    
  
  }
  
}
