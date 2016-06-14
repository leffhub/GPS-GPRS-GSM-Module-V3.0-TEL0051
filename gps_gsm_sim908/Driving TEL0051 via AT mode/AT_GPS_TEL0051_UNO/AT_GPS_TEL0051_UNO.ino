void setup() {
    //Init the driver pins for GSM function
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    //Output GSM Timing  
    digitalWrite(5,HIGH);
    delay(1500);
    digitalWrite(5,LOW); 
 }
  
 void loop() { 
    digitalWrite(3,HIGH); //disable GSM TX、RX
    digitalWrite(4,HIGH); //disable GPS TX、RX
 }
