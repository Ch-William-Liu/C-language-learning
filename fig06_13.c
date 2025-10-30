/* Fig 6.13: fig06_13.c
    Passing arrays and individual array elements to functions */
#include <stdio.h>
#define SIZE 5

/* function prototype */
void modifyArray(int b[] , int size);
void modifyElement(int e);

/* function main begins program execution */
int main(void){
    int a[SIZE] = { 0 , 1 , 2 , 3 , 4}; /* initialize a */
    int i; /* counter */

    printf("Effects if passing entire array by reference:\n\nThe values of the original array are:\n");

    /* output original array */
    for ( i = 0; i < SIZE; i++){
        /* code */
        printf("%3d" , a[i]);
    } /* end for */
    
    printf("\n"); 

    /* passing array to a modifyArray by reference */
    modifyArray(a , SIZE);

    printf("The values of the modified array are:\n");

    /* output the modified array */
    for ( i = 0; i < SIZE; i++){
        /* code */
        printf("%3d" , a[i]);
    } /* end for */
    
    /* output value of a[3] */
    printf("\n\nEffects of passing array element by value:\n\nThe value of a[3] is %d\n" , a[3]);

    /* passing array element a[3] by value */
    modifyElement(a[3]);

    /* output value of a[3] */
    printf("The value of a[3] is: %d\n" , a[3]);

    return 0; /* indicates successful termination */
} /* end main */

/* in function modifyArray, "b" is points to the original array "a" in memory */
void modifyArray(int b[] , int size){
    int j; /* counter */

    /* multiply each array element by 2 */
    for (j = 0; j < size; j++){
        /* code */
        b[j] *= 2;
    } /* end for */
} /* end fumction modifyArray */

/* in function modifyElement, "e" is a local copy of array element a[3] passed from main */
void modifyElement(int e){
    /* multiply parameter by 2 */
    printf("value in modifyElement is %d\n" , e *= 2);
} /* end function modifyElement*/