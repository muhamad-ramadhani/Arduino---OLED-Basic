#include<Wire.h>
#include<Adafruit_GFX.h>
#include<Adafruit_SSD1306.h>

const int lebar=128;
const int tinggi=64;
const int reset=4;


Adafruit_SSD1306 oled(lebar,tinggi,&Wire,reset);

void setup() {
  oled.begin(SSD1306_SWITCHCAPVCC,0x3C);
  oled.clearDisplay();
}

void loop() {
  oled.setTextSize(2);
  oled.setTextColor(WHITE);
  oled.setCursor(25,15);
  oled.println("Muhamad");
  oled.setCursor(12,33);
  oled.println("Ramadhani");
  oled.display();

  oled.setTextSize(1);
  oled.setTextColor(WHITE);
  oled.setCursor(1,5);
  oled.println("Kelompok 3");
}
