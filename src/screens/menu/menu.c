#include "menu.h"
#include "../../global/global.h"
#include "../../utils/screen/screen.h"
#include "../../utils/cls/cls.h"

char menuScreen() {
  cls();
  writeText("Menu:", SCREEN_WIDTH / 2, 4);
  writeText("What you want?", 0, 6);
  writeText("1 - Create", 0, 10);
  writeText("2 - Read", 0, 11);
  writeText("3 - Update", 0, 12);
  writeText("4 - Delete", 0, 13);
  buildScreen();
  
  char option = command();

  cls();
  if (option == '1') {
    writeText("Create", SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
  } else if (option == '2') {
    writeText("Read", SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
  } else if (option == '3') {
    writeText("Update", SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
  } else if (option == '4') {
    writeText("Delete", SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
  } else {
    return option;
  }

  buildScreen();
  option = command();
  return option;
}