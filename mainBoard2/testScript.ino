// Test for motors
void testScriptMouth() {
  // TEST FOR MOUTH
  for (mouthPos = 25; mouthPos <= 190; mouthPos += 2) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    mouth.write(mouthPos);  // tell servo to go to position in variable 'pos'
    delay(15);
    //Serial.println("mouth");                      // waits 15 ms for the servo to reach the position
  }
  for (mouthPos = 190; mouthPos >= 25; mouthPos -= 2) {  // goes from 180 degrees to 0 degrees
    mouth.write(mouthPos);                              // tell servo to go to position in variable 'pos'
    delay(15);                                          // waits 15 ms for the servo to reach the position
  }
}

void testScriptRShoulder() {
  // TEST FOR RIGHT SHOULDER
  for (rShoulderPos = 160; rShoulderPos >= 0; rShoulderPos -= 2) {  // goes from 180 degrees to 0 degrees
    rShoulder.write(rShoulderPos);                                  // tell servo to go to position in variable 'pos'
    delay(15);                                                      // waits 15 ms for the servo to reach the position
  }
  for (rShoulderPos = 0; rShoulderPos <= 160; rShoulderPos += 2) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    rShoulder.write(rShoulderPos);  // tell servo to go to position in variable 'pos'
    delay(15);
    //Serial.println("rShoulder");                      // waits 15 ms for the servo to reach the position
  }
  
}

void testScriptLShoulder() {
  // TEST FOR RIGHT SHOULDER
  for (lShoulderPos = 0; lShoulderPos <= 160; lShoulderPos += 2) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    lShoulder.write(lShoulderPos);  // tell servo to go to position in variable 'pos'
    delay(15);
    //Serial.println("rShoulder");                      // waits 15 ms for the servo to reach the position
  }
  for (lShoulderPos = 160; lShoulderPos >= 0; lShoulderPos -= 2) {  // goes from 180 degrees to 0 degrees
    lShoulder.write(lShoulderPos);                                  // tell servo to go to position in variable 'pos'
    delay(15);                                                      // waits 15 ms for the servo to reach the position
  }
}
