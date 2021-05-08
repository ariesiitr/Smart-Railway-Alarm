#include <LiquidCrystal.h>
LiquidCrystal lcd(5,6,8,9,10,11);
  
int redled = 2;
int greenled = 3;
int buzzer = 4;
int gassensor = A0;
int sensorThresh = 500;

void setup()
{
pinMode(redled, OUTPUT);
pinMode(greenled,OUTPUT);
pinMode(buzzer,OUTPUT);
pinMode(gassensor,INPUT);
Serial.begin(9600);
lcd.begin(16,2);
}

void loop()
{
  int smoke = analogRead(gassensor);
  Serial.print(smoke);
  if(smoke>sensorThresh)
  {
    digitalWrite(redled,HIGH);
    digitalWrite(greenled,LOW);
    tone(buzzer,1000,0);
    lcd.clear();
    lcd.print("ALERT!");
    lcd.setCursor(0,1);
    lcd.print("STOPPING TRAIN");
    delay(1000);
  }
  else if(smoke>0.7*sensorThresh)
  {
    digitalWrite(redled,HIGH);
    digitalWrite(greenled,LOW);
    tone(buzzer,1000,100);
    lcd.clear();
    lcd.print("ALERT!");
    lcd.setCursor(0,1);
    lcd.print("CHECK SYSTEM");
    delay(1000);
    
    
  }
  
  else
  {
    digitalWrite(greenled,HIGH);
    digitalWrite(redled,LOW);
    noTone(buzzer);
    lcd.clear();
    lcd.print("SAFE");
    delay(1000);
    
  }  
     
}
