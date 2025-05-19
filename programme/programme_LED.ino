//#include <dummy.h>

#define LED1 14
#define LED2 23
#define LED3 19 
#define LED4 33
#define LED5 25
#define LED6 26
#define LED7 27
#define LED8 32
#define LED9 15

void setup() {
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  pinMode (LED3, OUTPUT);
  pinMode (LED4, OUTPUT);
  pinMode (LED5, OUTPUT);
  pinMode (LED6, OUTPUT);
  pinMode (LED7, OUTPUT);
  pinMode (LED8, OUTPUT);
  pinMode (LED9, OUTPUT);
}
void loop () {
  digitalWrite (LED1, HIGH);
  delay (1000);
  digitalWrite (LED1, LOW);
  digitalWrite (LED2, HIGH);
  digitalWrite (LED3, HIGH);
  digitalWrite (LED4, HIGH);
  delay (1000);
  digitalWrite (LED4, LOW);
  digitalWrite (LED5, HIGH);
  delay (1000);
  digitalWrite (LED5, LOW);
  digitalWrite (LED6, HIGH);
  delay (1000);
  digitalWrite (LED6, LOW);
  digitalWrite (LED7, HIGH);
  delay (1000);
  digitalWrite (LED7, LOW);
  digitalWrite (LED8, HIGH);
  delay (1000);
  digitalWrite (LED8, LOW);
  digitalWrite (LED9, HIGH);
  delay (1000);
  digitalWrite (LED9, LOW);
}
