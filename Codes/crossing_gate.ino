#define echoPin 6
#define trigPin 7
#include <LiquidCrystal.h>
#include<Servo.h>
Servo servo;
long duration;
long distance;
long force;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2,fs=A0;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  lcd.begin(16,2);
  Serial.begin(9600);
  servo.attach(10);
}
void loop() {
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(200);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
    
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.017; 
  force= analogRead(fs);
  Serial.print("Force is ");
  Serial.println(force);
  lcd.print("distance : ");
  Serial.println("distance:");
  lcd.print(distance);
  Serial.println(distance);
  lcd.print("cm");
  Serial.println("cm");
  
  if(distance<200 && force>600) {
    servo.write(90);
  }
  else {
    servo.write(0);
  }
  delay(1000);
  lcd.clear();
  delay(1000);
}
