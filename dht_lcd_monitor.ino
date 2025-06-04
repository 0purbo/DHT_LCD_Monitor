#include <Wire.h>                 // For I2C
#include <LiquidCrystal_I2C.h>    // For I2C LCD
#include <DHT.h>                  // For DHT11 sensor

// Define DHT pin and type
#define DHTPIN 10
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

// Set the LCD I2C address (common values: 0x27 or 0x3F)
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.begin(16, 2);
  lcd.backlight();           // Turn on LCD backlight
  lcd.print("Initializing...");
  delay(2000);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error");
    delay(2000);
    return;
  }

  // Display readings on LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" °C");

  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print(" %");

  // Also print to serial
  Serial.print("Temp: ");
  Serial.print(t);
  Serial.print(" C, Humidity: ");
  Serial.print(h);
  Serial.println(" %");

  delay(2000);
}
