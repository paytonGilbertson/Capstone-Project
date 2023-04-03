void checkButtonState() {
  //int buttonState = 1;

  // read button state from pin (can only be 1 or 0)
  buttonState = digitalRead(buttonPin);

  // if button is pushed, call function to start animation
  if (buttonState == 1) {
    mouth.write(25);
    delay(150);
    mouth.write(170);
    delay(150);
    //mouth.write(145);
    delay(150);
    mouth.write(25);
    delay(150);
    mouth.write(170);
    delay(150);
    //mouth.write(145);

    delay(450);
    //Serial.println("pushed");
    wave();

    // Range: 25@open to 170@closed

    mouth.write(25);
    delay(300);
    mouth.write(170);
    delay(300);


    //delay(150);
    mouth.write(25);
    delay(300);
    mouth.write(170);
    delay(300);


    mouth.write(25);
    delay(300);
    mouth.write(170);
    delay(300);


    mouth.write(25);
    delay(300);
    mouth.write(170);
    delay(300);

    mouth.write(25);
    delay(300);
    mouth.write(170);
    delay(300);

    mouth.write(25);
    delay(300);
    mouth.write(170);
    delay(300);
    mouth.write(25);
    delay(300);
    mouth.write(170);
    delay(300);

    mouth.write(25);
    delay(300);
    mouth.write(170);
    delay(300);
  }
}
