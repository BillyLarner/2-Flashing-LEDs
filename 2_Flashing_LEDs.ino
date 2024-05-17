// setting pin numbers for use in functions.
 int ledPin1 = 4;   // Sets Pin 4 as the interger ledPin1
 int ledPin2 = 5;   // Sets Pin 5 as the interger ledPin2
 
void setup() {
  // put your setup code here, to run once:
  pinMode (ledPin1, OUTPUT);   // sets pin 4 as an output
  pinMode (ledPin2, OUTPUT);   // sets pin 5 as an output
}

void loop() {
  setLed1 (HIGH) ;  // Set LED1 on, and LED2 off.
  setLed1 (LOW) ;   // Set LED1 Off, and LED2 On.
}

void setLed1 (int led1) {
  digitalWrite (ledPin1, led1) ;  // the state of LED1 is determined by variable LED1

  if (led1 == HIGH)               // the state og LED2 is determined by variable LED1
    digitalWrite (ledPin2, LOW) ; // if LED1 is turned on. LED will be turned off
  else
    digitalWrite (ledPin2, HIGH) ;// if LED1 is turned off, LED2 will be turned on.

  delay(1000) ;                   // wait for a second
}