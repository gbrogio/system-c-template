#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "global.h"
#include "../utils/go-to/go-to.h"

int SCREEN_WIDTH = 80;
int SCREEN_HEIGHT = 24;
char APP_NAME[] = "APP FODA";

char command() {
  char c[2];
  writeText("COMMAND:", 0, SCREEN_HEIGHT - 1);
  goTo(11, SCREEN_HEIGHT - 1);
  scanf(" %1s", c);
  return tolower(c[0]);
}

void writeText(char *text, int x, int y) {
  // add padding left
  int x_correct;
  if (x == 0) x_correct = 2;
  else x_correct = x;

  // use to know where the text will start
  float proporcion = (double) x / SCREEN_WIDTH;
  float length = strlen(text) * proporcion;

  /* 
    correct the x position if the text is bigger than the screen width
    and add padding right. else, pass the x position minus the text length
    proporcionalized (like: length = 10, but the x was the middle of the screen,
    so the correct length to substract is 5).
  */
  int poss_correct;
  if (length + x_correct > SCREEN_WIDTH - 1) {
    poss_correct = (x_correct - ((length + x_correct) - (SCREEN_WIDTH - 1)));
  } else poss_correct = x_correct - length;

  goTo(poss_correct, y);
  printf("%s", text);
}
