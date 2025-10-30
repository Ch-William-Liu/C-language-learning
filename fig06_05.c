/* Fig 6.5: fig06_05.c
    Specifying an array's size with a symbolic constant  and initializing array elements 
    Initialize the elements of array s to the even integers from 2 to 20 */
#include <stdio.h>
#define SIZE 10 /* maxium size of array */

/* function main begins programs execution */
int main(void) {
    /* symbolic constant SIZE can be used to specify array size */
    int s[SIZE]; /* array has SIZE elements */
    int j; /* counter */

    for (j = 0; j < SIZE; j++){ /* set the value of s */
        /* code */
        s[j] = 2 + 2 * j; 
    } /* end for */
    
    printf("%s%13s\n" , "Elements" , "Value");

    /* output contents of array s in tabular format */
    for (j = 0; j < SIZE; j++){
        /* code */
        printf("%7d%13d\n" , j , s[j]);
    } /* end for */
    
    return 0; /* indicates successful termination */
} /* end main */