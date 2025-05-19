#define RS485_TX 13
#define RS485_RX 12
#define RS485_DE 3

void setup() {
  pinMode(RS485_DE, OUTPUT);
  digitalWrite(RS485_DE, HIGH); // Toujours en émission

  Serial.begin(9600);

}

void loop() {
  Serial.println("RS485");

  delay(1000);
}
