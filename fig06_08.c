/* Fig 6.8: fig06_08.c
    Histogram printing program */
#include <stdio.h>
#define SIZE 10

/* function main begins program execution */
int main(void){
    /* use initializer list to initialize array n */
    int n[SIZE] = {19 , 3 , 15 , 7 , 11 , 9 , 13 , 5 , 17 , 1};
    int i; /* outer for counter for array elements */
    int j; /* inner for counter counts *s in each histogram bar */

    printf("%s%13s%17s\n" , "Element" , "Value" , "Histogram");

    /* for each elements of array n, output a bar of the histogram */
    for (i = 0; i < SIZE; i++){
        /* code */
        printf("%7d%13d\t\t" , i , n[i]);

        for (j = 0; j < n[i]; j++){ /* print bar */
            /* code */
            printf("%c" , '*');
        } /* end inner for */

        printf("\n");
    } /*end outter for */
    
    return 0; /* indicates successful termination */
} /* end main */