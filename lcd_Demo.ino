#include <LiquidCrystal.h>

 LiquidCrystal lcd(13,12,11,10,9,8,7);            //初始化LCD
 void setup(){
     lcd.begin(16,2);                               //设置LCD为16列*2行
 }
 void loop(){
     lcd.clear();                                //清屏操作
     lcd.setCursor(5,0);                            //设置光标位置为第一行，第六列
     lcd.print("Welcome");                        //在LCD上输出信息
     delay(10);                                    //延时程序
     lcd.setCursor(2,1);
     lcd.print("I am xinmin");
     delay(3000);
     lcd.clear();
     lcd.setCursor(2,0);
     lcd.print("Hello World!");
     lcd.setCursor(0,1);
     lcd.print("4-Bit-Interface");
     delay(5000);
 }
