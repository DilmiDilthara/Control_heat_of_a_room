#include <LiquidCrystal.h>

LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

int TempPin=A0;
int in1=7;
int in2=6;
int in3=5;
int in4=4;
int EnA=3;
int EnB=2;

float temp;
float tempc;

void setup() {

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(EnA, OUTPUT);
  pinMode(EnB, OUTPUT);
  pinMode(TempPin, INPUT);
  lcd.begin(16,2);
  

}

void loop() {

  temp = analogRead(TempPin);
  tempc = (temp*4.88)/10;
  lcd.setCursor(0,0);
  lcd.print("Temp in c ");
  lcd.print(tempc);
  lcd.setCursor(0,1);

  if(tempc >= 26){
    analogWrite(EnA, 255);
    analogWrite(EnB, 255);
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    }

    else{

      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
      digitalWrite(in3,LOW);
      digitalWrite(in4,LOW);
      
      }
      

  
  

}
