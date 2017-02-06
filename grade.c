 #include <stdio.h>

    int main(void) {
    int grade = 84   /* arbitrary initialiaztion of grade */;
    char letter = 'f';    /* by default... */

    if (grade > 90) {
      letter = 'a';
    }
    else if (grade > 80) {
      letter = 'b';
    }
    else if (grade > 70) {
      letter = 'c';
    }
    else if (grade > 60) {
      letter = 'd';
    }
    printf("%c\n", letter);
    return 0;
}

/*
 The grade is determined by the last if statement made.
 Since the last if statement determines if the grade is  above a 60,
 then it will always return as a 'd' if it is.

 To fix this issue, once the grade is below a certain point,
 then the grade should be returned, using else if statements
*/
