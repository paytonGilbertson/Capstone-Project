// Information needed for the "Servo" library to control motors
#include <Servo.h>
// Information needed for the "Talkie" library which will control the voice
#include <Talkie.h>
#include <TalkieUtils.h>
#include <Vocab_US_Large.h>
#include <Vocab_Special.h>

//--------------------------------------------------

// DEFINE CONST VARIABLES
// PhotoResistor Pin
const int photoresistorPin = 0;  // A0 reads photoresistor value

// LED Pin
const int ledPin = 3;  //  pin 3 outputs led brightness

// SERVOs 
// Servo objects are defined here, attached to pins in setup() function
Servo rShoulder;
Servo lShoulder;
Servo rElbow;
Servo lElbow;
Servo mouth;

//--------------------------------------------------

// Run only once at the beginning of the program (on plugin of the animatronic)
void setup() {
  // set up OUTPUT pins for LED, SERVOS, SPEAKER, etc.
  pinMode(ledPin, OUTPUT);

  rShoulder.attach(10);
  lShoulder.attach(6);
  rElbow.attach(9);
  lElbow.attach(5);
  mouth.attach(4);

  Serial.begin(9600);
}

//--------------------------------------------------

// All functions in LOOP regarding sensors will call their own "reaction" functions
// so they do not need to be referenced here
void loop() {
  // function call for PHOTORESISTOR and LED action/reaction
  checkLightLevels();

  // function call for ULTRASONIC sensor
  checkForMotion();

  // function calls for ULTRASONIC reactions (different for different distances)
  checkDistance();
}
