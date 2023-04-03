void checkButtonState() {

  // read button state from pin (can only be 1 or 0)
  buttonState = digitalRead(buttonPin);

//Serial.println(buttonState);
  // if button is pushed, call function to start animation
  if (buttonState == HIGH) {
    //Serial.println("pushed");
    sayHello();
  }
  else {
  }
}