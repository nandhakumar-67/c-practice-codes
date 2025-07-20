 int pot =A0;
 int value;
 void setup() {
  Serial.begin(9600);
  pinMode(pot,INPUT);
  
  // put your setup code here, to run once:

}


void loop() {
  value =analogRead(pot);
  Serial.println(value);
  // put your main code here, to run repeatedly:

}
