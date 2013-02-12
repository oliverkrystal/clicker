int photocell = 23;
int led = 22;
int potentiometer = 21;



void setup() {
pinMode(led, OUTPUT);
}

void loop() {
	//Start checking to see if we are moving or not

	if ((analogRead(photocell)) > (analogRead(potentiometer))){
		delay(1);
		if ((analogRead(photocell)) > (analogRead(potentiometer))){
			digitalWrite(led, HIGH);
			Keyboard.print("n");
			digitalWrite(led, LOW);
		}
	}
	delay(350);

}