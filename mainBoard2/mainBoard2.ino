// Information needed for the "Servo" library to control motors
#include <Servo.h>

//--------------------------------------------------
// DEFINE CONST VARIABLES

// Button Pin
const int buttonPin = 12;  // pin 12 reads button state

// PhotoResistor Pin
const int photoresistorPin = A0;  // A0 reads photoresistor value

// SERVOs
// Servo objects are defined here, attached to pins in setup() function
Servo rShoulder;
Servo lShoulder;
Servo mouth;

// Ultrasonic Sensor Pins
const int ultraEcho = A1;
const int ultraTrigger = A2;

//--------------------------------------------------
// Other necessary global variables
int rShoulderPos = 0;
int lShoulderPos = 110;
int mouthPos = 0;
int buttonState = 0;



//--------------------------------------------------

// Run only once at the beginning of the program (on plugin of the animatronic)
void setup() {
  // set up pins for SERVOS, BUTTON and PHOTORESISTOR, etc. as either INPUT or OUTPUT
  pinMode(buttonPin, INPUT);
  pinMode(photoresistorPin, INPUT);


  rShoulder.attach(10);
  lShoulder.attach(6);
  mouth.attach(4);

  Serial.begin(9600);

  // Range: 160@bottom to 0@top
  rShoulder.write(160);

  // Range: 0@bottom to 160@top
  lShoulder.write(0);

  // Range: 25@open to 170@closed
  mouth.write(145);
}

//--------------------------------------------------

// All functions in LOOP regarding sensors will call their own "reaction" functions
// so they do not need to be referenced here
void loop() {

  checkLightLevels();

  // // function call for BUTTON action/reaction
  checkButtonState();

  // RESET MOTORS TO ORIGIN
  // Range: 160@bottom to 0@top
  rShoulder.write(160);

  // Range: 0@bottom to 160@top
  lShoulder.write(0);

  // Range: 25@open to 170@closed
  mouth.write(145);


  // TEST MODE
  //photoTest();
}
