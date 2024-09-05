/*
  Author: Guilherme Brogio Macedo da Silva <guilhermebrogio.ps@gmail.com>
  Date: mm/dd/2024
  Description: ...
*/

// main libs
#include <stdio.h>
#include <locale.h>
#include <string.h>

// utils
#include "utils/screen/screen.h"
#include "utils/cls/cls.h"
#include "utils/go-to/go-to.h"

// global
#include "global/global.h"

// screens
#include "screens/help/help.h"
#include "screens/main/main.h"
#include "screens/menu/menu.h"

int main() {
  setlocale(LC_ALL, "Portuguese");
  int start = 0;
  char c;

  do {
    if ((!c || c == 'b') && start == 0) mainScreen();
    else if (c == 'h') helpScreen();
    else if (c == 'x') break;
    else {
      start = 1;
      c = menuScreen();
      if (c == 'b') c = '0';
      continue;
    }

    if (!c || c == 'b' || c == 'h') c = command();
  } while (c != 'x');

  return 0;
}
