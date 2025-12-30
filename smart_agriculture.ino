#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pins
const int soilPin = A0;     // Soil moisture (pot)
const int tempPin = A1;     // TMP36
const int pirPin  = 2;      // Push button (PIR)
const int pumpLED = 8;      // LED = Pump
const int buzzer  = 9;      // Buzzer = Alarm

int soilValue, soilPercent;
float temperatureC;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(pumpLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(pumpLED, LOW);
  digitalWrite(buzzer, LOW);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Smart Agriculture");
  lcd.setCursor(0,1);
  lcd.print("System Starting");
  delay(2000);
  lcd.clear();
}

void loop() {

  // Soil moisture
  soilValue = analogRead(soilPin);
  soilPercent = map(soilValue, 0, 1023, 0, 100);

  // Temperature (TMP36)
  int rawTemp = analogRead(tempPin);
  float voltage = rawTemp * (5.0 / 1023.0);
  temperatureC = (voltage - 0.5) * 100;

  // Motion detection
  int motion = digitalRead(pirPin);

  // Pump logic
  if (soilValue < 300) {
    digitalWrite(pumpLED, HIGH);   // Pump ON
  } else {
    digitalWrite(pumpLED, LOW);    // Pump OFF
  }

  // Alarm logic
  if (motion == HIGH) {
    digitalWrite(buzzer, HIGH);    // Alarm ON
  } else {
    digitalWrite(buzzer, LOW);     // Alarm OFF
  }

  // LCD Screen 1
  lcd.setCursor(0,0);
  lcd.print("Temp:");
  lcd.print((int)temperatureC);
  lcd.print("C   ");

  lcd.setCursor(0,1);
  lcd.print("Moist:");
  lcd.print(soilPercent);
  lcd.print("%   ");

  delay(1500);
  lcd.clear();

  // LCD Screen 2
  lcd.setCursor(0,0);
  if (soilValue < 300)
    lcd.print("Pump: ON ");
  else
    lcd.print("Pump: OFF");

  lcd.setCursor(0,1);
  if (motion == HIGH)
    lcd.print("Motion: YES");
  else
    lcd.print("Motion: NO ");

  delay(1500);
  lcd.clear();
}
