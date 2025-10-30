/* Fig 5.15: fig05_15.c
    Recursive fibonacci function */
#include <stdio.h>

long fibonacci(long n); /*function prototype */

/* function main begins program execution */
int main(void){
    long result; /* fibonacci value */
    long number; /* number input by user */

    /* obtain integer from user */
    printf("Enter an integer: ");
    scanf("%d",&number); 

    /* calcualte fibonacci value for number input by user */
    result=fibonacci(number); 

    /* display result */
    printf("Fibonacci( %1d )= %1d\n",number,result);

    return 0; /* indicate successful termination */
} /* end function main */

/* Recursive definition of function fibonacci */
long fibonacci(long n){
    /* base case */
    if (n==0 || n==1){
        return n; 
    } /* end if */
    else {
        return (fibonacci(n-2)+fibonacci(n-1)); 
    } /* end else */
} /* end function fibonacci */