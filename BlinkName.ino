
int led1 = D7;

void setup() {

  pinMode(led1, OUTPUT);
  
}
//Long Blink
void blinkLong(){
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(100);
}

//Short Blink
void blinkShort(){
    digitalWrite(led1, HIGH);
    delay(250);
    digitalWrite(led1, LOW);
    delay(100);
}
//Delay between letters
void blinkPause(){
    digitalWrite(led1, LOW);
    delay(250);
}

void loop() {
//Letter C
blinkLong();
blinkShort();
blinkLong();
blinkShort();
blinkPause();
//Letter H
blinkShort();
blinkShort();
blinkShort();
blinkShort();
blinkPause();
//Letter R
blinkShort();
blinkLong();
blinkShort();
blinkPause();
//Letter I
blinkShort();
blinkShort();
blinkPause();
//Letter S
blinkShort();
blinkShort();
blinkShort();
blinkPause();
}


