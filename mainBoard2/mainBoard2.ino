// Information needed for the "Servo" library to control motors
#include <Servo.h>
// Information needed for the "Talkie" library which will control the voice
#include <Talkie.h>
#include <TalkieUtils.h>
#include <Vocab_US_Large.h>
//#include <Vocab_AstroBlaster.h>
//#include <Vocab_Soundbites.h>
#include <Vocab_Special.h>
#include <Vocab_Toms_Diner.h>
#include <Vocab_US_Acorn.h>
#include <Vocab_US_Clock.h>
#include <Vocab_US_TI99.h>


//--------------------------------------------------
// DEFINE CONST VARIABLES

// Button Pin
const int buttonPin = 12; // pin 12 reads button state

// PhotoResistor Pin
const int photoresistorPin = A0;  // A0 reads photoresistor value

// LED Pin
const int ledPin = 2;  //  pin 2 outputs led brightness

// SERVOs
// Servo objects are defined here, attached to pins in setup() function
Servo rShoulder;
Servo lShoulder;
Servo rElbow;
Servo lElbow;
Servo mouth;

// Ultrasonic Sensor Pins
const int ultraEcho = A1;
const int ultraTrigger = A2;

//--------------------------------------------------
// Other necessary global variables
int rShoulderPos = 0;
int lShoulderPos = 110;
int mouthPos = 0;


Talkie voice;

//--------------------------------------------------

// Run only once at the beginning of the program (on plugin of the animatronic)
void setup() {
  // set up pins for LED, SERVOS, SPEAKER, etc. as either INPUT or OUTPUT
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(photoresistorPin, INPUT);

  rShoulder.attach(10);
  lShoulder.attach(6);
  rElbow.attach(9);
  lElbow.attach(5);
  mouth.attach(4);

  pinMode(ultraEcho, INPUT);
  pinMode(ultraTrigger, OUTPUT);

  Serial.begin(9600);
}

//--------------------------------------------------

// All functions in LOOP regarding sensors will call their own "reaction" functions
// so they do not need to be referenced here
void loop() {
  //testScript();
  
  // // function call for BUTTON action/reaction
   checkButtonState();

  // // function call for PHOTORESISTOR and LED action/reaction
   //checkLightLevels();

  // // function call for ULTRASONIC sensor
  // checkForMotion();

  // // function calls for ULTRASONIC reactions (different for different distances)
  // checkDistance();
}
