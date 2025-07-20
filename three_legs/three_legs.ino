int r = 11;
int g = 12;
int b = 13;

void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {
  analogWrite(r, 200);  // r must be a PWM-capable pin
}
