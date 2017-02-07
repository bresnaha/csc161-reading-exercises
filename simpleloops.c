#include <stdio.h>

int main (void) {
  for (int i = 0; i < 10; i++) {
    printf("%d\n", i); // prints counter from 0 to 9
  }
  for (int i = 0; i <= 10; i++) {
    printf("%d\n", i); // prints counter from 0 to 10
  }
  for (int i = 1; i <= 10; i++) {
    printf("%d\n", i); // prints counter from 1 to 10
  }
  for (int i = 10; i > 0; i--) {
    printf("%d\n", i); // prints counter from 10 to 1
  }
  for (int i = 10; i >= 0; i--) {
    printf("%d\n", i); // prints counter from 10 to 0
  }

  return 0;

}
/* gcc -std=c11 -o loop simpleloops.c

1) For a loop that iterates 10 times, initialize with i = 0; i < 10; i++
2) For a loop that prints values 0 through 10 in increasing order, 
   initalize with int i = 0; i <=10; i++
3) For a loop that prints values 10 through 0 in decreasing order,
   initalize with int i = 10; i >= 0; i--

 */

