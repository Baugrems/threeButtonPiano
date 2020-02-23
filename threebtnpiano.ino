
//Sets variables for program. Do not change these unless you use different pins.
const int buzzer = 9; //buzzer to arduino pin 9
const int btnA = 3;
const int btnB = 5;
const int btnC = 7;
int buttonStateA;
int buttonStateB;
int buttonStateC;
//Do not modify above this without help.


//Sets tone for each button. MODIFY THESE! (Between 0 and 6000)
int toneOne = 1000;
int toneTwo = 1000;
int toneThree = 1000;


void setup(){ //This function runs once when the board gets power.
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
  pinMode(btnA, INPUT);
  pinMode(btnB, INPUT);
  pinMode(btnC, INPUT);
}

void loop(){ //This functions runs over and over and over again while power is on.
  buttonStateA = digitalRead(btnA); //Reads button A
  buttonStateB = digitalRead(btnB); //Reads button B
  buttonStateC = digitalRead(btnC); //Reads button C

 if (buttonStateA == HIGH) {
    tone(buzzer, toneOne); //Play tone
    delay(50); //Wait 50 milliseconds
    noTone(buzzer); //Stop playing tone
 }
 if (buttonStateB == HIGH) {
    tone(buzzer, toneTwo); //Play tone
    delay(50); //Wait 50 milliseconds
    noTone(buzzer); //Stop playing tone
 }
 if (buttonStateC == HIGH) {
    tone(buzzer, toneThree); //Play tone
    delay(50); //Wait 50 milliseconds
    noTone(buzzer); //Stop playing tone
 }
}
