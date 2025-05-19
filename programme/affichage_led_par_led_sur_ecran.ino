#include <Wire.h> 
#include <Adafruit_GFX.h> //blibliotèque assurant la compatibilité des écrans, pour la graphie
#include <Adafruit_SSD1306.h> // blibliotèque pour le matériel

// Dimensions de l'écran
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_ADDR 0x3C

// Initialisation de l'écran OLED
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// Tableau des broches des 9 LED
const int ledPins[9] = {14, 23, 19, 33, 25, 26, 27, 32, 15};

void setup() {
  Serial.begin(115200); // vitesse de transmission

  // Initialiser toutes les broches comme sorties
  for (int i = 0; i < 9; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW); // Éteindre au départ
  }
 digitalWrite(ledPins[9], HIGH);
  // Initialisation de l'écran OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR)) { // bloucle display.begin signifie inisiation de l'écran 0x3C
    Serial.println(F("Échec initialisation OLED")); // affiche message erreur si problème
    while (true); // boucle infinie, bloque le programme pour éviter qu'il ne fonctionne sans l'écran
  }

  display.clearDisplay();
  display.setTextSize(2); // Texte plus grand pour une seule ligne
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  for (int i = 0; i < 8; i++) {
    // Allumer la LED courante
    digitalWrite(ledPins[i], HIGH);

    // Afficher le numéro de la LED sur l'écran
    display.clearDisplay();
    display.setCursor(0, 20); // Position centrale
    display.print("LED ");
    display.print(i + 1);
    display.println(" ON");
    display.display();

    // Attendre 2 secondes
    delay(2000);

    // Éteindre la LED
    digitalWrite(ledPins[i], LOW);

  }
  digitalWrite(ledPins[8], LOW);
  display.clearDisplay();
    display.setCursor(0, 20); // Position centrale
    display.print("LED ");
    display.print(9);
    display.println(" ON");
    display.display();
    delay(2000);

    digitalWrite(ledPins[8], HIGH);


}
