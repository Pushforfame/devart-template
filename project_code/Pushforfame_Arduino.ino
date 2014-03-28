// Make sure you use right pin for button
int pushButton = 15;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  if (buttonState==1){
  Serial.println("1");
}else if(buttonState==0){
Serial.println("0");
}
  
  delay(20);        // delay in between reads for stability
}



