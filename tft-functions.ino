

void updateDisplay(bool clear)
{
  if (clear) {
    tft.fillScreen(TFT_BLACK);
  }

  tft.setTextColor(TFT_WHITE);
  tft.setTextFont(2);
  tft.setCursor(100, 4);
  if (set_speed) tft.print("SPEED");
  else           tft.print("INCLINE");

  if (clear) {
    tft.drawRect(1, 1, 238, 20, TFT_GREENYELLOW);
    tft.drawFastVLine(TFT_WIDTH / 2, 22, TFT_HEIGHT - 22, TFT_WHITE);
    tft.drawFastHLine(1, TFT_HEIGHT / 2 + 20, 238, TFT_WHITE);
  }

  tft.setTextFont(4);

  // speed top left
  tft.fillRect(0,                 30, 118, 40, TFT_BLACK);
  tft.setCursor(4, TFT_HEIGHT / 2 - 18);
  tft.println(kmph);

  // incline top right
  tft.fillRect(TFT_WIDTH / 2 + 2, 30, 118, 40, TFT_BLACK);
  tft.setCursor(TFT_WIDTH / 2 + 4, TFT_HEIGHT / 2 - 18);
  tft.println(incline);

  // dist bot left
  tft.fillRect(0, TFT_HEIGHT - 40, 118, 40, TFT_BLACK);
  tft.setCursor(4, TFT_HEIGHT - 20);
  tft.println(total_distance/1000);

  // elevation bot right
  tft.fillRect(TFT_WIDTH / 2 + 2, TFT_HEIGHT - 40, 118, 40, TFT_BLACK);
  tft.setCursor(TFT_WIDTH / 2 + 4, TFT_HEIGHT - 20);
  tft.println((uint32_t)elevation_gain);
}

void updateBTConnectionStatus()
{
}
