long Value; //Variable: Value  Type data: long

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  Value = random (1, 10);
  // print out the value:
  Serial.println(Value);
  delay(500);  // delay in between reads for stability
}
