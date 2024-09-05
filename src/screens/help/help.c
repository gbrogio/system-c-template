#include "help.h"
#include "../../global/global.h"
#include "../../utils/screen/screen.h"
#include "../../utils/cls/cls.h"

void helpScreen() {
  cls();
  writeText("HELP", SCREEN_WIDTH / 2, 4);
  writeText("Avaiable commands:", 0, 6);
  writeText("b - Go back", 0, 10);
  writeText("h - Open help screen", 0, 9);
  writeText("x - Stop the program", 0, 8);
  buildScreen();
}