void setup() {
  int currentThreshHold = 0;
  int currentPhotocellStatus = 0;

  int photocell = 23;
  int led = 22;
  int potentiometer = 21;
}

void loop() {
	//Start checking to see if we are moving or not

	if ((analogRead(photcell)) > (analogRead(potentiometer))){
		digitalWrite(led, HIGH);
		Keyboard.print("n");
		digitalWrite(led, low);
	}
	delay(350);

}


