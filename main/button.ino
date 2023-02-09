void checkButtonState() {
  int buttonState = 0;

  // read button state from pin (can only be 1 or 0)
  buttonState = digitalRead(buttonPin);

  // if button is pushed, call function to start animation
  if(buttonState == 1) {
    sayHello();
  }


}
