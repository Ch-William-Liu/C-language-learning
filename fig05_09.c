/* Fig 5.9: fig05_09.c
    Randomizing dice-rolling program */
#include <stdio.h> /* Contains function prototypes for the standard intput/output libary functions, and information used by them */
#include <stdlib.h> /* Contains function prototypes for conversions of numbers to text abd text to numbers, memory allocation, random numbers, and other utility functions */

/* function main begins program execution */
int main(void){
    int i; /* counter */
    unsigned seed; /* number used to seed random number generator, there is no negative number */

    printf("Enter seed: ");
    scanf("%u",&seed); /* note %u for unsigned */
    
    srand(seed); /* seed random number generator */

    /* loop 10 times */
    for (i=1; i<=10; i++){

        /* pick a random number from 1 to 6 and output it */
        printf("%10d",1+(rand()%6));

        if ((i%5)==0){
            printf("\n");
        } /* end if */
    } /* end for */

    return 0; /* indicate that successful termination */
} /* end function main */