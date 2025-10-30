/* Fig 5.4: fig05_04.c
    Finding the maxium of three number */
#include <stdio.h>

int maximun(int x, int y, int z); /* function prototype */

/* function main begins program execution */
int main(void){
    int number1, number2, number3; /* three numbers to compare */

    printf("Enter three integers: ");
    scanf("%d%d%d", &number1, &number2, &number3);

    /* number1, number2 and number3 are arguments to the maximum function call */
    printf("Maximum is %d\n", maximun(number1, number2, number3));

    return 0; /* indicate that program ended successfully */
} /* end function main */

/* Function maximum definition */
/* x, y and z are parameters */
int maximun(int x, int y, int z){
    int max=x; /* assume x is the largest */

    if (y>max){ /* if y is larger than max, assign y to max */
        max=y; 
    } /* end if*/
    if (z>max){ /* if z is larger than max, assign z to max */
        max=z;
    } /*end if */

    return max; /* max is the largest value */
} /* end function maximum */