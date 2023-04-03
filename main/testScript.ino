void photoTest() {
  int lightLevel = analogRead(photoresistorPin);  // Read the lightlevel

  lightLevel = map(lightLevel, 0, 1023, 0, 255);
  // Adjust the value 0 to 900 to span 0 to 255

  // Print out the lightLevel value to check threshold is correct
  Serial.println(lightLevel);
}