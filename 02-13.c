#include <stdio.h>

float expt(float x, int y) {
  float a = 1.0;

  if (y == 0) {
    a = 1.0;
  }
  else if (y < 0) {
    for(int i = 0; i < -1 *y; i++) {
      a = a / x;
    }
  }
  else {
      for(int i = 0; i < y; i++) {
        a = a * x;
      }
    }
  return a;
}

void main(void) {
  printf("%f\n", expt(2,3));
  printf("%f\n", expt(0.5,2));
  printf("%f\n", expt(0.25, -2));
  printf("%f\n", expt(10.0, 0));
}
