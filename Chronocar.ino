/*  Name: Tavina Chen
    Date: December 2022
    
    Description: 
    The user will input a time (1-99) seconds displayed on the display. Then press the start button. 
    As the car travels the flashing and beeping freuqency of the LEDs and piezo will increase every 1/5 of the journey. 
    During the last 1/5th of the journey, the LEDs will be on constantly with a constant sound from the piezo. 
*/

//Buttons
int addTimeButton, addTime = 7, subTimeButton, subTime = 6, startCarButton, startCar = 8, buttonPress = 40;
int ON = HIGH, OFF = LOW;

//Time
int timer = 0, flashFreq, ones, tens;

//Loop variables
int a, b, c;

//Lights & Sound
int lights = 12;
int sounds = 13;

//4 Digit 7 Seg Display
int segA = 2, segB = 5, segC = A2, segD = A3, segE = A4, segF = 3, segG = A1;

int dig3 = A0, dig4 = 4;

int dispFlash = 10;

//Motor
int motor = 11; 
int motorSpeed = HIGH;

void setup() 
{
    //Inputs
    pinMode(addTime, INPUT);
    pinMode(subTime, INPUT);
    pinMode(startCar, INPUT);
    
    //Outputs
    
    //Lights & Sound
    pinMode(lights, OUTPUT);
    pinMode(sounds, OUTPUT);
    
    //4 Digit 7 Seg Display
    pinMode(segA, OUTPUT); pinMode(segB, OUTPUT);
    pinMode(segC, OUTPUT); pinMode(segD, OUTPUT);
    pinMode(segE, OUTPUT); pinMode(segF, OUTPUT);
    pinMode(segG, OUTPUT); pinMode(dig3, OUTPUT);
    pinMode(dig4, OUTPUT);
    
    //Motor
    pinMode(motor, OUTPUT);
}

void loop() 
{  
    //Buttons
    addTimeButton = digitalRead(addTime);
    subTimeButton = digitalRead(subTime);
    startCarButton = digitalRead(startCar);
    
    if (subTimeButton == HIGH && timer>0) 
    {
      timer = timer - 1;
      delay(buttonPress); 
    } 
  	if (addTimeButton == HIGH && timer<99) 
    {
      timer = timer + 1;
      delay(buttonPress); 
    }
    
    //Timer
    ones = timer%10;
    tens = (timer/10);
    flashFreq = (timer *1000)/10;
    
    //4 Digit 7 Segment Display (0-99)
    
    //Ones (0-9)
    if (ones == 0){
    digitalWrite(dig4, HIGH);
    digitalWrite(dig3, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, ON);
    digitalWrite(segE, ON);
    digitalWrite(segF, ON);
    digitalWrite(segG, OFF);
    delay(dispFlash);
  }
  if (ones == 1) {
    digitalWrite(dig4, HIGH);
    digitalWrite(dig3, LOW);
    
    digitalWrite(segA, OFF);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, OFF);
    digitalWrite(segE, OFF);
    digitalWrite(segF, OFF);
    digitalWrite(segG, OFF);
    delay(dispFlash);
  }
  if (ones == 2) {
    digitalWrite(dig4, HIGH);
    digitalWrite(dig3, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, ON);
    digitalWrite(segC, OFF);
    digitalWrite(segD, ON);
    digitalWrite(segE, ON);
    digitalWrite(segF, OFF);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  if (ones == 3) {
    digitalWrite(dig4, HIGH);
    digitalWrite(dig3, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, ON);
    digitalWrite(segE, OFF);
    digitalWrite(segF, OFF);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  if (ones == 4) {
    digitalWrite(dig4, HIGH);
    digitalWrite(dig3, LOW);
    
    digitalWrite(segA, OFF);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, OFF);
    digitalWrite(segE, OFF);
    digitalWrite(segF, ON);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  if (ones == 5) {
    digitalWrite(dig4, HIGH);
    digitalWrite(dig3, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, OFF);
    digitalWrite(segC, ON);
    digitalWrite(segD, ON);
    digitalWrite(segE, OFF);
    digitalWrite(segF, ON);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  if (ones == 6) {
    digitalWrite(dig4, HIGH);
    digitalWrite(dig3, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, OFF);
    digitalWrite(segC, ON);
    digitalWrite(segD, ON);
    digitalWrite(segE, ON);
    digitalWrite(segF, ON);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  if (ones == 7) {
    digitalWrite(dig4, HIGH);
    digitalWrite(dig3, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, OFF);
    digitalWrite(segE, OFF);
    digitalWrite(segF, OFF);
    digitalWrite(segG, OFF);
    delay(dispFlash);
  }
  if (ones == 8) {
    digitalWrite(dig4, HIGH);
    digitalWrite(dig3, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, ON);
    digitalWrite(segE, ON);
    digitalWrite(segF, ON);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  if (ones == 9) {
    digitalWrite(dig4, HIGH);
    digitalWrite(dig3, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, OFF);
    digitalWrite(segE, OFF);
    digitalWrite(segF, ON);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  
  //Tens (0-9)
  if (tens == 0){
    digitalWrite(dig3, HIGH);
    digitalWrite(dig4, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, ON);
    digitalWrite(segE, ON);
    digitalWrite(segF, ON);
    digitalWrite(segG, OFF);
    delay(dispFlash);
  }
  if (tens == 1) {
    digitalWrite(dig3, HIGH);
    digitalWrite(dig4, LOW);
    
    digitalWrite(segA, OFF);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, OFF);
    digitalWrite(segE, OFF);
    digitalWrite(segF, OFF);
    digitalWrite(segG, OFF);
    delay(dispFlash);
  }
  if (tens == 2) {
    digitalWrite(dig3, HIGH);
    digitalWrite(dig4, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, ON);
    digitalWrite(segC, OFF);
    digitalWrite(segD, ON);
    digitalWrite(segE, ON);
    digitalWrite(segF, OFF);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  if (tens == 3) {
    digitalWrite(dig3, HIGH);
    digitalWrite(dig4, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, ON);
    digitalWrite(segE, OFF);
    digitalWrite(segF, OFF);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  if (tens == 4) {
    digitalWrite(dig3, HIGH);
    digitalWrite(dig4, LOW);
    
    digitalWrite(segA, OFF);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, OFF);
    digitalWrite(segE, OFF);
    digitalWrite(segF, ON);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  if (tens == 5) {
    digitalWrite(dig3, HIGH);
    digitalWrite(dig4, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, OFF);
    digitalWrite(segC, ON);
    digitalWrite(segD, ON);
    digitalWrite(segE, OFF);
    digitalWrite(segF, ON);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  if (tens == 6) {
    digitalWrite(dig3, HIGH);
    digitalWrite(dig4, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, OFF);
    digitalWrite(segC, ON);
    digitalWrite(segD, ON);
    digitalWrite(segE, ON);
    digitalWrite(segF, ON);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  if (tens == 7) {
    digitalWrite(dig3, HIGH);
    digitalWrite(dig4, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, OFF);
    digitalWrite(segE, OFF);
    digitalWrite(segF, OFF);
    digitalWrite(segG, OFF);
    delay(dispFlash);
  }
  if (tens == 8) {
    digitalWrite(dig3, HIGH);
    digitalWrite(dig4, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, ON);
    digitalWrite(segE, ON);
    digitalWrite(segF, ON);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  if (tens == 9) {
    digitalWrite(dig3, HIGH);
    digitalWrite(dig4, LOW);
    
    digitalWrite(segA, ON);
    digitalWrite(segB, ON);
    digitalWrite(segC, ON);
    digitalWrite(segD, OFF);
    digitalWrite(segE, OFF);
    digitalWrite(segF, ON);
    digitalWrite(segG, ON);
    delay(dispFlash);
  }
  
  //Starting the Car
  
  if (startCarButton == HIGH && timer>0) {
    //Turn off display
    digitalWrite(dig3, HIGH);
    digitalWrite(dig4, HIGH);
    
    //Turn on Motor
    analogWrite(motor, motorSpeed);
    
    for (a = 1; a <= 4; a += 1) //Loops 4 times (4/5 of the timer); Every 5th, the flash frequency is cut in half
    {
      for (b = (flashFreq * 2); b <= (timer * 1000) / 5; b += (flashFreq * 2))
      {
        tone(sounds, 831, 1000); // play tone 68 (G#5 = 831 Hz)
        digitalWrite(lights, HIGH);
        delay(flashFreq); 
        noTone(sounds);
        digitalWrite(lights, LOW);
        delay(flashFreq); 
      }
      flashFreq /= 2;
    }
    
    for (c = flashFreq; c <= (timer * 1000) / 5; c += flashFreq) //last 5th of timer; constant sound and LEDs 
    {
      tone(sounds, 831, 1000); // play tone 68 (G#5 = 831 Hz)
      digitalWrite(lights, HIGH);
      delay(flashFreq);
    }
    
    //Turn off motor, sounds, and lights
    digitalWrite(motor, LOW);
    noTone(sounds);
    digitalWrite(lights, LOW);
  }
}