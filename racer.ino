// A Button
// Accelerates
int pinAButton = 0;

// B Button
// Air Brakes
int pinBButton = 1;

// C Buttons
// C Up
// Cycles through 4 Camera Views:
// - Behind Podracer (Default)
// - On Top of Engines
// - Front View
// - Above and Behind Podracer
int pinCUpButton = 2;

// C Down
// Hold Down for Rear View
int pinCDownButton = 3;

// C Left
// Roll onto Left Side
int pinCLeftButton = 4;

// C Right
// Roll onto Right Side
int pinCRightButton = 5;

// L Button
// Toggles In Race Map, Progress Bar, and Perimeter Progress Loop
int pinLButton = 6;

// R Button
// Repair (Hold Down)/Launch Weapon (Double-Tap)
// Hold down to repair engine cells. Double-tap to use flamejet (Sebulba only).
int pinRButton = 7;

// START
// Pauses/Unpauses Game, Brings Up In Race Options Menu
int pinStartButton = 8;

// Z Button (on back)
// Skids/Slides Podracer
int pinZButton = 9;

// Control Stick
// Steers Podracer
int pinControlStickHorizontal = 10;
int pinControlStickVertical = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // Output
  pinMode(pinAButton, OUTPUT);
  pinMode(pinBButton, OUTPUT);
  pinMode(pinCUpButton, OUTPUT);
  pinMode(pinCDownButton, OUTPUT);
  pinMode(pinCLeftButton, OUTPUT);
  pinMode(pinCRightButton, OUTPUT);
  pinMode(pinLButton, OUTPUT);
  pinMode(pinRButton, OUTPUT);
  pinMode(pinStartButton, OUTPUT);
  pinMode(pinZButton, OUTPUT);
  pinMode(pinControlStickHorizontal, OUTPUT);
  pinMode(pinControlStickVertical, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}
