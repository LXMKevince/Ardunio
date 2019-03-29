#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); 
 
void setup() {
lcd. begin(16, 2);
}
void loop()
{
digitalWrite(TrigPin, LOW);
delayMicroseconds(2);
digitalWrite(TrigPin, HIGH);
delayMicroseconds(10);
digitalWrite (TrigPin, LOW);
 
 
int timer=-500;
cm=pulseIn(EchoPin, HIGH)/58.0;
cm=(int (cm*100.0))/100.0;
delay(500);
 
 
if(millis()>timer +500)
{
lcd. print ("Distancce:");
lcd. setCursor(6,1);
lcd. print (cm);
lcd. print ("cm ");
lcd. home();
timer=millis()+500;
}
}
