void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x;
  int y;
  int button;

  x = analogRead(A0);
  y = analogRead(A1);
  button = digitalRead(7);

  Serial.print("X: ");
  Serial.print(x);

  Serial.print("Y: ");
  Serial.print(y);

  Serial.print("B: ");
  Serial.print(button);

  Serial.println("");
  delay(500);
}
