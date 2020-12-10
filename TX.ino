int buttonVal = 0;

void setup(){
  Serial.begin(9600);
  pinMode(INPUT, 5);
  pinMode(OUTPUT, 7);
}
void loop(){
  buttonVal = digitalRead(5);

  if(buttonVal == 1){
    Serial.write(1);
    delay(1000);
  }

  else {
    Serial.write(0);
    delay(1000);
  }
}
