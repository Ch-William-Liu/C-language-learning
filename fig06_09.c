/* Fig 6.9: fig06_09.c
    Roll a six-side dice 6000 times */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define FREQUENCY_SIZE 7

/* function main begins program execution */
int main(void){
    int diceFace; /* face of dice from 1 to 6 */
    int roll; /* counter of how many times we roll the dice */
    int freq[FREQUENCY_SIZE] = {0}; /* clear counts */

    srand(time(NULL)); /* seed random-number generator */

    /* roll the dice */
    for (roll = 1; roll <= 6000; roll++){
        /* code */
        diceFace = 1 + rand() % 6;
        ++freq[diceFace]; /* replace the switch section in fig05_08 */
    } /* end for */

    /* output the result */
    printf("%s%17s\n" , "Face" , "Frequency"); 
    for (diceFace = 1; diceFace < FREQUENCY_SIZE; diceFace++){
        /* code */
        printf("%4d%17d\n" , diceFace , freq[diceFace]);
    } /* end for */
    
    return 0; /* indicates successful termination */
} /* end main */
