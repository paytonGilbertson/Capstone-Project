void sayHello() {
  voice.say(sp3_HIGH);
  voice.say(spt_THERE);
  delay(3000);
  //voice.say(sp2_M);
  voice.say(sp2_Y);
  voice.say(spa_NAME);
  voice.say(sp4_IS);
  voice.say(sp4_ABEAN);
  voice.say(spa_AND);
  voice.say(sp2_I);
  voice.say(spt_AM);
  voice.say(spa_A);
  voice.say(sp2_MACHINE);
}

void scream() {
  voice.say(sp2_DANGER);
  voice.say(sp2_DANGER);
  delay(100);
  voice.say(sp4_LIGHTS);
  voice.say(sp4_OUT);
  delay(200);

  voice.say(sp2_DANGER);
  voice.say(sp2_DANGER);
  delay(100);
  voice.say(sp4_LIGHTS);
  voice.say(sp4_OUT);
  delay(200);
}