// Test for all function except for photoresistor and LED
void testScript() {
  // TEST FOR MOUTH
  for (mouthPos = 130; mouthPos <= 180; mouthPos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    mouth.write(mouthPos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (mouthPos = 180; mouthPos >= 130; mouthPos -= 1) { // goes from 180 degrees to 0 degrees
    mouth.write(mouthPos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }

}
