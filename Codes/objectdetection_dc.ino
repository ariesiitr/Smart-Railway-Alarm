int motorLU = 6; 
int motorLD = 9;
int motorRU = 3;
int motorRD = 5;
const int buzzer = 13;
long duration;
long distance;
#define echoPin 10
#define trigPin 11

void setup()
{
 pinMode(motorLU, OUTPUT); 
  pinMode(motorLD, OUTPUT); 
  pinMode(motorRU, OUTPUT); 
  pinMode(motorRD, OUTPUT); 
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);  
  pinMode(buzzer,OUTPUT);
}

void loop()               
{
  
  motorAcceleration();
   digitalWrite(trigPin, LOW);
  delayMicroseconds(200);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.017; 
  Serial.print("distance:");
  Serial.print(distance);
  Serial.println("cm");
  
  if(distance<200) {
    analogWrite(motorLU, 0);  
    analogWrite(motorLD, 0);  
     analogWrite(motorRU, 0);  
     analogWrite(motorRD, 0);  
    tone(buzzer,329);
    delay(2000);
    noTone(buzzer);
  }
  
  
}

void motorAcceleration(){
  int delayTime = 50;   
  for(int i = 0; i <20; i++){ 
    analogWrite(motorLU, i);  
    analogWrite(motorLD, i);  
     analogWrite(motorRU, i);  
     analogWrite(motorRD, i);  
    delay(delayTime); 
    
    
  }
  
  
       
  
}
