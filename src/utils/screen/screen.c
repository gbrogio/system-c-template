#include <stdio.h>
#include <string.h>

#include "screen.h"
#include "../go-to/go-to.h"
#include "../../global/global.h"

void buildScreenBorder() {
  // header
  for (int i = 0; i < SCREEN_WIDTH; i++) {
    goTo(i, 3);
    // printf("═");
    printf("-");
  }

  // footer
  for (int i = 0; i < SCREEN_WIDTH; i++) {
    goTo(i, SCREEN_HEIGHT - 2);
    // printf("═");
    printf("-");
  }

  // horizontal lines
  for (int i = 0; i < SCREEN_WIDTH; i++) {
    goTo(i, 0);
    // printf("═");
    printf("-");
    goTo(i, SCREEN_HEIGHT);
    // printf("═");
    printf("-");
  }

  // vertical lines
  for (int i = 0; i < SCREEN_HEIGHT; i++) {
    goTo(0, i);
    // printf("║");
    printf("|");
    goTo(SCREEN_WIDTH, i);
    // printf("║");
    printf("|");
  }

  // header corners
  goTo(0, 3);
  // printf("╠");
  printf("+");
  goTo(SCREEN_WIDTH, 3);
  // printf("╣");
  printf("+");

  // footer corners
  goTo(0, SCREEN_HEIGHT - 2);
  // printf("╠");
  printf("+");
  goTo(SCREEN_WIDTH, SCREEN_HEIGHT - 2);
  // printf("╣");
  printf("+");

  // corners
  goTo(0, 0);
  // printf("╔");
  printf("+");
  goTo(SCREEN_WIDTH, 0);
  // printf("╗");
  printf("+");
  goTo(0, SCREEN_HEIGHT);
  // printf("╚");
  printf("+");
  goTo(SCREEN_WIDTH, SCREEN_HEIGHT);
  // printf("╝");
  printf("+");
}

void buildScreenInfo() {
  // header
  writeText("UNICV", 0, 1);
  writeText(APP_NAME, 0, 2);
  writeText("DATA STRUCTURE", SCREEN_WIDTH, 1);
  writeText("GUILHERME BROGIO", SCREEN_WIDTH, 2);

  // footer
  writeText("x - EXIT", SCREEN_WIDTH, SCREEN_HEIGHT - 1);
}

void buildScreen() {
  buildScreenInfo(APP_NAME);
  buildScreenBorder(SCREEN_WIDTH, SCREEN_HEIGHT);
}
