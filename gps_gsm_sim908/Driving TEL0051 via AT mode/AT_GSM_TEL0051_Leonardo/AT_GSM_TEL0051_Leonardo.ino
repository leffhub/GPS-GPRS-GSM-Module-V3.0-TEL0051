void setup() {
  Serial.begin(9600); //initialize Serial(i.e. USB port)
  Serial1.begin(9600); //initialize Serial1
 
  //Init the driver pins for GSM function
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  //Output GSM Timing
  digitalWrite(5, HIGH);
  delay(1500);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW); //enable GSM TX、RX
  digitalWrite(4, HIGH); //disable GPS TX、RX
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  Serial.println("Input AT please...");
}
void loop() {
  while (Serial1.available()) {
    Serial.write(Serial1.read());
  }
  while (Serial.available()) {
    Serial1.write(Serial.read());
  }
  delay(1);
}
