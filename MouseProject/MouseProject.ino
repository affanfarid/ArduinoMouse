#include <Mouse.h>


const int joyStickX1 = A0;
const int joyStickY1 = A1;
const int joyStickBtn1 = 4;

const int joyStickX2 = A2;
const int joyStickY2 = A3;
const int joyStickBtn2 = 5;

int jsB1;
int jsX1;
int jsY1;
int jsB2;
int jsX2;
int jsY2;

//void printJoyStick(int x, int y, int b){
//  Serial.println("X: " + x);
//  Serial.println("Y: " + y);
//  Serial.println("B: " + b);
//  Serial.println("\n");
//}

void printJoyStick(int x, int y, int b){
  Serial.print("X: ");
  Serial.print(x);

  Serial.print(" Y: ");
  Serial.print(y);
  
  Serial.print(" B: ");
  Serial.print(b);
  Serial.print("\n");
}


void setup(){
  Serial.begin(9600);

  pinMode(joyStickX1, INPUT);
  pinMode(joyStickY1, INPUT);
  pinMode(joyStickBtn1, INPUT);
  digitalWrite(joyStickBtn1, HIGH);

  pinMode(joyStickX2, INPUT);
  pinMode(joyStickY2, INPUT);
  pinMode(joyStickBtn2, INPUT);
  digitalWrite(joyStickBtn2, HIGH);

}


void loop(){
//  Serial.print("X: ");
//  Serial.print(analogRead(joyStickX1));
//  //Serial.println("X: " + analogRead(joyStickX1));
//  //Serial.println("Y: " + analogRead(joyStickY1));
//  //Serial.println("B: " + digitalRead(joyStickBtn1));
//  Serial.print("\n");  

  printJoyStick(analogRead(joyStickX1), analogRead(joyStickY1), digitalRead(joyStickBtn1));
  //printJoyStick(analogRead(joyStickX2), analogRead(joyStickY2), digitalRead(joyStickBtn2));

  delay(20);


  
}
