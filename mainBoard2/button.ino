void checkButtonState() {
  //int buttonState = 1;

  // read button state from pin (can only be 1 or 0)
  buttonState = digitalRead(buttonPin);

  // if button is pushed, call function to start animation
  if (buttonState == 1) {
    delay(1000);
    //Serial.println("pushed");
    rShoulder.write(78);
    rShoulder.write(45);
    wave();
    wave();
    rShoulder.write(160);
    Serial.println("down");
  }
}
