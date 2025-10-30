/* Exercise 5.26: exercises05_26.c
    Perfect number */
/* For example, 6 is perfect number due to 1+2+3=6 (its factor, include 1, is sum to itself)
    Write a functuion perfect that determines if parameter number is perfect number. 
    Use this function in a program that determines and print all the perfect numbers between 1 and 1000. */

#include <stdio.h>

void perfect(int number); /* function prototype */

/* function main begins program execution */
int main(void){
    int num; /* initialize */

    for (num=1; num<=10000; num++){
        perfect(num);
    } /* end for */

    return 0; /* indicate successful termination */
} /* end function main */

/* function perfect begins program execution */
void perfect(int number){
    int i, sum =0;

    for (i=1; i<=number/2; i++){
        if (number%i==0){
            sum+=i; /* sum the factor up */
        } /* end if */
    } /* end for */

    if (sum==number){
        printf("%d is a perfect number! %d=1",number,number); /* print the result */
        for (i=2; i<=number/2; i++){
            if (number%i==0){
                printf("+%d",i);
            }
        } /* end for */
        printf(".\n");
    }  /* end if */
    
} /* end function perfect */