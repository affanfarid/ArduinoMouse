
const int joyStickX1 = A0;
const int joyStickY1 = A1;
const int joyStickBtn1 = 2;

const int joyStickX2 = A2;
const int joyStickY2 = A3;
const int joyStickBtn2 = 3;

int jsB1;
int jsX1;
int jsY1;
int jsB2;
int jsX2;
int jsY2;

void printJoyStick(int x, int y, int b){
  Serial.print("X: " + x);
  Serial.print("Y: " + y);
  Serial.print("B: " + b);
  Serial.print("\n");
}


void setup(){
  Serial.begin(9600);

  pinMode(joyStickX1, INPUT);
  pinMode(joyStickY1, INPUT);
  pinMode(joyStickBtn1, INPUT);

  pinMode(joyStickX2, INPUT);
  pinMode(joyStickY2, INPUT);
  pinMode(joyStickBtn2, INPUT);

}


void loop(){

  printJoyStick(analogRead(joyStickX1), analogRead(joyStickY1), digitalRead(joyStickBtn1));
  printJoyStick(analogRead(joyStickX2), analogRead(joyStickY2), digitalRead(joyStickBtn2));

  delay(500);


  
}
