/* Fiiig 5.3: fig05_03.c
    Creating and using a progra,,er-defined function */
#include <stdio.h>

int square(int y); /* function prototype */ /* some kind of 事先告訴程式在main中有一個這個函式*/

/* function main begins program execution */
int main(void){
    int x; /* counter */

    /* loop 10 times and calculate and output square of each x each time */
    for (x=1; x<=10; x++){
        printf("The square of %d is %d\n", x, square(x)); /* function call */
    } /* end for */

    printf("\n");
    return 0; /* indicate that program ended successfully */
} /* end function main*/

/* square function definition returns square of parameter */
int square(int y){ /* y is a copy of argument to function */
    return y*y; /* return square of y as int*/
} /* end function square */