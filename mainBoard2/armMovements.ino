void wave() {
  for (rShoulderPos = 45; rShoulderPos >= 0; rShoulderPos -= 1) {  // goes from 180 degrees to 0 degrees
    rShoulder.write(rShoulderPos);                                 // tell servo to go to position in variable 'pos'
    delay(15);                                                     // waits 15 ms for the servo to reach the position
  }
  for (rShoulderPos = 0; rShoulderPos <= 45; rShoulderPos += 1) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    rShoulder.write(rShoulderPos);  // tell servo to go to position in variable 'pos'
    delay(15);
    //Serial.println("rShoulder");                      // waits 15 ms for the servo to reach the position
  }
}

void screamArms() {
  for (rShoulderPos = 45; rShoulderPos >= 0; rShoulderPos -= 1) {  // goes from 180 degrees to 0 degrees
    rShoulder.write(rShoulderPos);                                 // tell servo to go to position in variable 'pos'
    delay(15);                                                     // waits 15 ms for the servo to reach the position
  }
  for (lShoulderPos = 160; lShoulderPos >= 115; lShoulderPos -= 1) {  // goes from 180 degrees to 0 degrees
    lShoulder.write(lShoulderPos);                                 // tell servo to go to position in variable 'pos'
    delay(15);                                                     // waits 15 ms for the servo to reach the position
  }
  for (rShoulderPos = 0; rShoulderPos <= 45; rShoulderPos += 1) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    rShoulder.write(rShoulderPos);  // tell servo to go to position in variable 'pos'
    delay(15);
    //Serial.println("rShoulder");                      // waits 15 ms for the servo to reach the position
  }
  for (lShoulderPos = 115; lShoulderPos <= 160; lShoulderPos += 1) {  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    lShoulder.write(lShoulderPos);  // tell servo to go to position in variable 'pos'
    delay(15);
  }
}