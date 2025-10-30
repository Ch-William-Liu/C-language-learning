/* Fig 4.2: fig04_02.c
    COunter-controlled repetition with the fro statement */
#include <stdio.h>

/* function main begins program execution */
int main(void){
    int counter; /* define counter */

    /* initialization, repetition, and increment
        are all include in the for statement header. */
    for (counter = 1; counter <= 10; counter++){
        /* code */
        printf("%d\n",counter);
    } /* end for */
    
    return 0; /* indicate that program ended successfully */
} /* end function main */