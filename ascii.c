#include <stdio.h>


void reverse_triangle(void) {
  for(int i = 0; i < 6; i++) {
    for(int j = 6; j > i; j--) {
      printf("*");
    }
    printf("\n");
  }
}

void pyramid(void) {
  for(int i = 0; i < 6; i++) {
    for(int j = 5; j > i; j--) {
      printf(".");
    }
    for(int k = 0; k < 2 * i + 1; k++) {
      printf("#");
    }
    for(int l = 5; l > i; l--) {
      printf(".");
    }
    printf("\n");
  }
}

void rsPoint() {
  for(int i = 0; i < 5; i++) {
    printf("        ");
    
    for(int j = 5; j > i; j--) {
      printf(" ");
    }
    printf("/");
    for(int k = 0; k < i; k++) {
      printf("/\\");
    }
    printf("\\\n");
  }
}

void nineDash(void) {
  printf("---------");
}

void fourCirc(void) {
  printf(" o o o o ");
}

void midBuild(void) {
  printf("| %%    %% |"); //help why??
}

void building() {
  nineDash();
  midBuild();
  nineDash();
  printf("\n");
  fourCirc();
  midBuild();
  fourCirc();
  printf("\n");
  nineDash();
  midBuild();
  nineDash();
  printf("\n");
}

void steps(void) {
  for(int s = 0; s < 9; s++) {
  
    if(s%3 == 0) {
      //grasst();
      printf("~");
      for(int i = 0; i < (4 - 1*(s/3)); i++) {
          printf("^~");
      }
      //flat();
      printf("/");
      for(int j = 0; j < (8 + 4*(s/3)); j++) {
        printf("-");
      }
      printf("\\");
      // grasst();
      for(int i = 0; i < (4 - 1*(s/3)); i++) {
        printf("^~");
      }
      printf("\n");
    }
    else if(s%3 == 1) {
      // grassb();
      printf("^");
      for(int t = 0; t < (3 - 1*((s-1)/3)); t++) {
        printf("~^");
      }
      printf("~");
      //flat();
      printf("/");
      for(int j = 0; j < (10 + 4*(s/3)); j++) {
        printf("-"); 
      }
      printf("\\~");
      // grassb();
      printf("^");
      for(int t = 0; t < (3 - 1*((s-1)/3)); t++) {
        printf("~^");
      }
      printf("\n");
    }
    else{
      //upstepside();
      for(int i = 0; i < (8 - 2*((s-2)/3)); i++) {
        printf(" ");
      }
      // upflatstep();
      printf("|");
      for(int i = 0; i < (10 + 4*((s-1)/3)); i++) {
        printf("=");
      }
      printf("|\n");
     
    }
  }
}

void bottom(void) {
  for(int l = 0; l < 7; l++) {
    if(l == 0 || l == 6) {
      if(l == 0) {
        printf("   /");}
      else {printf("   \\");}
      for(int i = 0; i < 20; i++) {
        printf(" ");
      }
      if(l == 0) {
        printf("\\\n");}
      else {printf("/ \n");}
    }
     else if(l == 1 || l == 5) {
       if(l == 1) {
         printf("  /  ");}
       else printf("  \\  ");
      for(int i = 0; i < 18; i++) {
        printf("=");
      }
      if(l == 1) {
        printf("  \\\n");}
      else printf("  /\n");

    }
    else if(l == 2 || l == 4) {
      if(l == 2) {
        printf(" /  / ");}
      else printf(" \\  \\ "); 
      for(int i = 0; i < 16; i++) {
        printf("\"");
      }
      if (l == 2) {
        printf(" \\  \\ \n");}
      else
        printf(" /  / \n");
      }
    else{
      printf("|  | ");
      for(int i = 0; i < 18; i++) {
        printf("\"");
      }
      printf(" |  |\n");
    }
    
  }
}

void rocky_steps(void) {
  rsPoint();
  building();
  steps();
  bottom();
}

void main(void) {
  // reverse_triangle();
  //pyramid();
  rocky_steps();
}

/*
void grasst(void) {
  printf("~");
  for(int i = 0; i < 4; i++) {
        printf("^~");
  }
}

void grassb(void) {
  printf("^");
  for(int t = 0; t < 3; t++) {
    printf("~^");
  }
}

void flat(void) {
  printf("/");
  for(int j = 0; j < 10; j++) {
    printf("-");
      }
  printf("\\");
}

void upstepside(void) {
  for(int i = 0; i < 8; i++) {
    printf(" ");
  }
}

void upflatstep(void) {
  printf("|");
  for(int i = 0; i < 10; i++) {
    printf("=");
  }
  printf("|");
}


 */
