#include <Wire.h>
#include <Adafruit_LiquidCrystal.h>

// Initialisation de l'écran avec l'adresse I2C 0x20
Adafruit_LiquidCrystal lcd(0);

// Définir les broches des LEDs
const int ledPins[] = {14, 23, 19, 33, 25, 26, 27, 32, 15 };
const int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

int currentLed = 0;

void setup() {
  // Initialiser l'écran LCD (16 colonnes x 2 lignes)
  lcd.begin(16, 2);
  lcd.setBacklight(1); // Allume le rétroéclairage

  // Configurer les broches LED comme sorties
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }

  lcd.print("Initialisation...");
  delay(1000);
  lcd.clear();
}

void loop() {
  // Éteindre toutes les LEDs
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  // Allumer la LED actuelle
  digitalWrite(ledPins[currentLed], HIGH);

  // Afficher sur l'écran
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("LED allumee:");
  lcd.setCursor(0, 1);
  lcd.print("Numero ");
  lcd.print(currentLed + 1);

  // Passer à la LED suivante
  currentLed = (currentLed + 1) % numLeds;

  delay(1000); // Attendre 1 seconde
}
