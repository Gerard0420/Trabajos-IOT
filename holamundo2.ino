#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2); // (0x3f,16,2) || (0x27,16,2)  ||(0x20,16,2) 

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
 lcd.setCursor(0,0);
  lcd.print("Hola mundo :)"); 
  lcd.setCursor (0,1);
  lcd.print("");
}

void loop() { 

  lcd.display();
  delay(500);
  lcd.noDisplay();
  delay(100);
}
