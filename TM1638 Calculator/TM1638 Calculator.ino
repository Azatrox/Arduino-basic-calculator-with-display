/*
This is a calculator using some buttons and a TM1638 display it shows both numbers each on 4 7 segment displays

⠀⠀⢀⡀⠀⠀⠀⠀⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⠞⠋⠙⢳⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠸⣷⡀⠀⣿⡄⢹⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡾⠁⠀⠀⠀⠀⢻⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⣰⡇⠀⠹⣧⠀⣻⣧⠀⠉⠀⠀⠀⠀⠀⠀⢀⣀⣤⠤⠶⠒⠛⠓⠒⠒⠲⠦⢤⣌⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠘⣿⡀⠀⢻⣷⠛⠻⣇⠀⠘⠗⠀⣠⡴⠞⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠦⣤⡴⠞⠛⠋⠉⠛⢷⠀⠀⠀⠀
⠀⠘⣷⣴⠿⢿⣆⠀⠙⠃⠀⣠⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⢶⣄⠀⠀⠀⢸⠇⠀⠀⠀
⠀⢠⣿⡇⠀⢨⣿⡆⠀⢀⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢦⡀⢀⡿⠀⠀⠀⠀
⠀⠈⠀⠛⠀⠀⠀⠀⢠⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣾⠃⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣆⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⠛⠲⢦⣄
⠀⠀⠀⠀⠀⠀⢀⡇⠀⠀⠀⠀⠀⠀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⡀⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⣿
⠀⠀⠀⠀⠀⠀⢸⡇⠀⠀⠀⠀⠀⣾⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⣿⣿⡆⠀⠀⠀⠀⠀⢸⣇⣤⠞⠁
⠀⠀⠀⠀⠀⠀⠘⡇⠀⠀⠀⠀⠀⠹⢿⣿⡿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣿⣿⡿⠃⠀⠀⠀⠀⠀⢸⠋⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣄⣀⠀⠀⢀⣠⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⡀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠘⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⠿⠿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠛⢷⡀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠈⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠓⠚⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠁⠀⢸⡇⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠲⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠞⠛⠲⠶⠶⠛⠁⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠲⠤⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⡤⢴⡞⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡤⠼⠯⣉⡉⠛⠒⠒⠒⠒⠒⠛⢋⠉⠉⠹⣆⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠱⣄⠀⠀⠈⠁⠀⠀⠀⠀⠀⣰⠋⠀⢀⡀⢹⡏⢳⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠏⠳⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠁⠀⠀⣷⡿⢶⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡤⣴⠒⠞⠙⡆⠀⠀⠀⠀⡼⠙⠶⠲⡤⢄⣸⠛⠲⠷⣟⡇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⡀⠀⠀⠀⠀⣽⠀⠀⠀⠀⡇⠀⠀⠀⠀⢸⡟⠀⠀⠀⣨⡇⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠑⢤⣀⢀⣰⠃⠀⠀⠀⠀⢹⣄⠀⢀⣴⡿⠤⠴⠖⠚⠉⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠙⠛⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀Now the pin layout
2 gnd pins are used one for the breadboard with the buttons the other for the display
1 5V pin is used for the display
Pin 2 is the STROBE input for the display
Pin 3 is the CLOCK input for the display
Pin 4 is the DATA input for the display
Pin 5 is always HIGH it supplies the breadboard with 5V⠀⠀
Pin 9 is the input for Addition
Pin 10 is the input for Subtraction
Pin 11 is the input for Multiplication
Pin 12 is the input for Division
Pin 13 is the input for Results
*/


#include <TM1638.h>
#define STB 2
#define CLK 3
#define DIO 4

TM1638 tm(CLK, DIO, STB);

int addition = 9;
int subtraction = 10;
int multiplication = 11;
int division = 12;
int resultButton = 13;
int source = 5;
int buttons1 = 0;
int buttons2 = 0;

float num1 = 0;
float num2 = 0;

bool addi = false;
bool subtract = false;
bool divide = false;
bool multiply = false;
bool c = false;
bool x =false;

float result = 0;

void setup() 
{
  pinMode(addition, INPUT);
  pinMode(subtraction, INPUT);
  pinMode(multiplication, INPUT);
  pinMode(division, INPUT);
  pinMode(resultButton, INPUT);
  pinMode(source, OUTPUT);

  Serial.begin(2000000);
  tm.reset();
}

void reset() {
  num1 = num2 = 0;
  addi = subtract = divide = multiply = c = false;
  Serial.println("Reset");
  tm.displayClear();
}

void updateDisplay() {
  tm.displayVal(3, (int)(num1 / 1000) % 10);
  tm.displayVal(2, (int)(num1 / 100) % 10);
  tm.displayVal(1, (int)(num1 / 10) % 10);
  tm.displayVal(0, (int)(num1) % 10);
  Serial.println("num1 updated");
  tm.displayVal(7, (int)(num2 / 1000) % 10);
  tm.displayVal(6, (int)(num2 / 100) % 10);
  tm.displayVal(5, (int)(num2 / 10) % 10);
  tm.displayVal(4, (int)(num2) % 10);
  Serial.println("num2 updated");
}
void loop() {
  digitalWrite(source, HIGH);
  buttons1 = tm.getButtons();
  buttons2 = tm.getButtons();
  if(buttons1 != 0)
  {
  Serial.println(buttons1);
  }
if(x == false){
  switch (buttons1) {
    case 128: 
      num1 += 1;
      updateDisplay();
      delay(200);
      Serial.println("1 num 1 up");
      break;

    case 64: 
      num1 += 10;
      updateDisplay();
      delay(200);
      Serial.println("10 num 1 up");
      break;

    case 32: 
      num1 += 100;
      updateDisplay();
      delay(200);
      Serial.println("100 num 1 up");
      break;

    case 16: 
      num1 += 1000;
      updateDisplay();
      delay(200);
      Serial.println("1000 num 1 up");
      break;
  }
  }
  if(x == true){
  switch(buttons2){
    case 8: 
      num2 += 1;
      updateDisplay();
      delay(200);
      Serial.println("1 num 2 up");
      break;

    case 4: 
      num2 += 10;
      updateDisplay();
      delay(200);
      Serial.println("10 num 2 up");
      break;

    case 2: 
      num2 += 100;
      updateDisplay();
      delay(200);
      Serial.println("100 num 2 up");
      break;

    case 1: 
      num2 += 1000;
      updateDisplay();
      delay(200);
      Serial.println("1000 num 2 up");
      break;
    }
  }
  if (digitalRead(addition) == HIGH) {
    addi = true;
    c = true;
    x = true;
    Serial.println("addition selected");
    delay(200);
  }
  if (digitalRead(subtraction) == HIGH) {
    subtract = true;
    c = true;
    x = true;
    Serial.println("substraction selected");
    delay(200);
  }
  if (digitalRead(multiplication) == HIGH) {
    multiply = true;
    c = true;
    x = true;
    Serial.println("multiplication selected");
    delay(200);
  }
  if (digitalRead(division) == HIGH) {
    divide = true;
    c = true;
    x = true;
    Serial.println("division selected");
    delay(200);
  }

  if (digitalRead(resultButton) == HIGH) {
    outputfunc();
    Serial.println("output triggered");
    delay(200);
  }
}

void outputfunc() {
  if (addi) {
    result = num1 + num2;
  } else if (subtract) {
    result = num1 - num2;
  } else if (multiply) {
    result = num1 * num2;
  } else if (divide) {
    result = num1 / num2;
  }

  Serial.print("Result: ");
  Serial.println(result);

  tm.displayClear();
  tm.displayVal(7, (int)(result / 10000000) % 10);
  tm.displayVal(6, (int)(result / 1000000) % 10);
  tm.displayVal(5, (int)(result / 100000) % 10);
  tm.displayVal(4, (int)(result / 10000) % 10);
  tm.displayVal(3, (int)(result / 1000) % 10);
  tm.displayVal(2, (int)(result / 100) % 10);
  tm.displayVal(1, (int)(result / 10) % 10);
  tm.displayVal(0, (int)(result) % 10);
  delay(10000);
  
  reset();
}
