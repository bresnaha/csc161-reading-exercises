#include <stdio.h>

int main (void) {
  drawRocketShip();
}

void printCone(void) {
  printf("    /\\\n");
  printf("   /  \\\n");
  printf("  /    \\\n");
  printf("  ------\n");
}

void printBox(void) {
  printf("  ------\n");
  printf("  |    |\n");
  printf("  |    |\n");
  printf("  ------\n");
}

void drawRocketShip(void) {
  printCone();
  printBox();
  PrintCone();
}
