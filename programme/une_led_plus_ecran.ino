#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Définition de la largeur et hauteur de l'écran
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// Adresse I2C par défaut de l'écran SSD1306
#define OLED_ADDR 0x3C

// Création de l'objet écran
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Broche de la LED
#define LED_PIN 14

void setup() {
  // Initialisation du port série (utile pour le debug)
  Serial.begin(115200);

  // Initialisation de la LED
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH); // Allume la LED

  // Initialisation de l'écran OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR)) {
    Serial.println(F("Échec de l'initialisation de l'écran OLED"));
    for (;;); // Stopper ici en cas d'erreur
  }

  display.clearDisplay();
  display.setTextSize(1);             // Taille du texte
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);            // Position du texte
  display.println("LED 1 est allumee");
  display.display();                  // Affiche sur l'écran
}

void loop() {
  // Rien ici pour l’instant
}
