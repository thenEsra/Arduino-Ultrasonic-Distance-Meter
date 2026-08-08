
#include <Wire.h>;

#include <LiquidCrystal_I2C.h>;

LiquidCrystal_I2C lcd(0*27,16,2);

#define trigPin 9
#define echoPin 10 

long duration ;
float distance;

void setup(){


 pinMode(trigPin,OUTPUT);
 pinMode(echoPin,INPUT);

 Serial.begin(9600);
 lcd.init();
 lcd.backlight();
 
 lcd.setCursor(0,0);
 lcd.print("Ultrasonic");
 lcd.setCursor(0,1);
 lcd.print("Distance Meter");
 delay(2000);
 lcd.clear();
 }

 void loop(){
  //send triger pulse
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);


  digitalWrite(trigPin,LOW);

  duration =pulseIn(echoPin,HIGH);


  distance=duration*0.0343/2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
 //LCD display 
 
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("Distance");


 lcd.setCursor(0,1);
 lcd.print(distance,1);
 lcd.print("cm");

delay(500); 
 }


  






 