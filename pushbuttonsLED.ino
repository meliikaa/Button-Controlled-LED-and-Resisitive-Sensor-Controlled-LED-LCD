const int buttonPin_1 = 2;  // the number of the pushbutton pin
const int buttonPin_2 = 3; 
const int ledPin = 13;      // the number of the LED pin

// variables will change:
int buttonState_1 = 0;      // variable for reading the pushbutton 1 status
int buttonState_2 = 0;      // variable for reading the pushbutton 2 status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pins as inputs:
  pinMode(buttonPin_1, INPUT);
  pinMode(buttonPin_2, INPUT);
}

void loop() {
  // read the state of the pushbutton values:
  buttonState_1 = digitalRead(buttonPin_1);
  buttonState_2 = digitalRead(buttonPin_2);
  
  // check if either of the pushbuttons is pressed. If it is, the buttonState is HIGH:
  if (buttonState_1 == HIGH || buttonState_2 == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
