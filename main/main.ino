// DEFINE CONST VARIABLES

//PhotoResistor Pin
const int photoresistorPin = 0; // A0 reads photoresistor value

//LED Pin
const int ledPin = 9;   //  pin 9 outputs led brightness 


void setup()
{
  // set up OUTPUT pins for LED, SERVOS, SPEAKER, etc.
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);
}


// All functions in LOOP regarding sensors will call their own "reaction" functions 
// so they do not need to be referenced here
void loop()
{
 // function call for PHOTORESISTOR and LED action/reaction
 checkLightLevels();

 // function call for ULTRASONIC sensor
 checkForMotion();

// function calls for ULTRASONIC reactions (different for different distances)
  checkDistance();
}

 