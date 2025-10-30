/* Fig 6.15: fig06_15.c
    This program sorts an array's value into ascending order */
#include <stdio.h>
#define SIZE 10

/* function main begins progream execution */
int main(void){
    /* initialize a */
    int a[SIZE] = { 2 , 6 , 4 , 8 , 10 , 12 , 89 , 68 , 45 , 37};
    int pass; /* pass counter */
    int i; /* comparisons counter */
    int hold; /* temporary location used to swap array elements */

    printf("Data items in original order:\n");

    /* output orginal array */
    for ( i = 0; i < SIZE; i++){
        /* code */
        printf("%4d" , a[i]);
    } /* end for */

    /* bubble sort */
    /* loop to control number of comparisons per pass */
    for ( pass = 1; pass < SIZE; pass++){
        /* code */
        /* loop to control number of comparisons per pass */
        for ( i = 0; i < SIZE -1; i++){
            /* code */
            /* compare adjacent elements and swap them if first element is greater than second element */
            if (a[i] > a[i + 1]){
                /* code */
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            } /* end if*/
        } /* end inner for */
    } /* end outer for */
    
    printf("\nData items in asc ending order\n");
    /* output sorted array */
    for ( i = 0; i < SIZE; i++){
        /* code */
        printf("%4d" , a[i]);
    } /* end for */

    printf("\n");

    return 0; /* indicates successful termination */
} /* end main*/