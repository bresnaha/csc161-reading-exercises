#include <stdio.h>

void change(int x) {
  x = 3;
}

int main(void) {
  int x = 0;
  change(x);
  printf("%d\n", x);
}

/*
1.  main will set x equal to 0,  
    then input 0 into change so that x now equals 3.
    Finally, main will print x, which is 3.
2.  main outputs 0. 
3.  When change(x) is called, the program goes to change(x);
    in change(x), 0 was input and changed to 3.
    However, change(x) does not return any values, 
    so in main, x remains unchanged. 

    Program Counter: 9
    Stack       Output
    --change
      [x] 3
 */
