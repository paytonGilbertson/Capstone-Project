void checkButtonState() {
  int buttonState = 1;

  // read button state from pin (can only be 1 or 0)
  buttonState = digitalRead(buttonPin);

  // if button is pushed, call function to start animation
  if (buttonState == 0) {
    Serial.println("pushed");
    delay(1500);
    sayHello();
  }
}
