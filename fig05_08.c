/* Fig 5.8: fig05_08.c
    Roll a six-side dice 6000 times */
#include <stdio.h> /* Contains function prototypes for the standard intput/output libary functions, and information used by them */
#include <stdlib.h> /* Contains function prototypes for conversions of numbers to text abd text to numbers, memory allocation, random numbers, and other utility functions */

/* function main begins program execution */
int main(void){
    /* initialized */
    int frequency1=0; /* rolled 1 counter */
    int frequency2=0; /* rolled 2 counter */
    int frequency3=0; /* rolled 3 counter */
    int frequency4=0; /* rolled 4 counter */
    int frequency5=0; /* rolled 5 counter */
    int frequency6=0; /* rolled 6 counter */
    
    int roll; /* roll counter, value 1 to 6000 */

    int face; /* rolled number of each time */

    for (roll=1; roll<=6000; roll++){
        face=1+(rand()%6); /* random number from 1 to 6 */

        switch (face){
        case 1: /* rolled 1 */
            frequency1++; 
            break;
        case 2: /* rolled 2 */
            frequency2++; 
            break;
        case 3: /* rolled 3 */
            frequency3++; 
            break;
        case 4: /* rolled 4 */
            frequency4++; 
            break;
        case 5: /* rolled 5 */
            frequency5++; 
            break;
        case 6: /* rolled 6 */
            frequency6++; 
            break;
        } /* end switch */
    } /* end for */

    /* display the result in tabular format */
    printf("%s%13s\n","Face","Frequency");
    printf("   1%13d\n",frequency1);
    printf("   2%13d\n",frequency2);
    printf("   3%13d\n",frequency3);
    printf("   4%13d\n",frequency4);
    printf("   5%13d\n",frequency5);
    printf("   6%13d\n",frequency6);

    return 0; /* indicates that successful termination */
} /* end function main */