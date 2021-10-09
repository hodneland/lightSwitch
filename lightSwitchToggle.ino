int buttonPin = 11;
int lightPin = 2;
int buttonState = 1;
int buttonNew;
int buttonOld = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT);
pinMode(lightPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonNew = digitalRead(buttonPin);
Serial.println(buttonNew);
delay(100);

if(buttonOld == 1 && buttonNew == 0){
  if(buttonState == 1){
    digitalWrite(lightPin, HIGH);
    buttonState =0;
  }
  else{
    digitalWrite(lightPin, LOW);
    buttonState = 1;
  }
}
buttonOld = buttonNew;
delay(100);
}
