/* Exercise 5.16: exercises05_16.c
    Write a function to calculate power without using math library */
/* Assume:
    exponent: postive, non-zero integer
    base: integer
*/

#include <stdio.h>

long integerPower(int base,unsigned exponent); /* function prototype */

/* function main begins program execution */
int main(void){
    int baseNum; /* for the base number */
    unsigned exponentNum; /* for the exponent */
    long resultNum; /* calculated result */

    printf("Enter the base number: "); /* ask to input */
    scanf("%d",&baseNum);
    printf("Enter the exponent number: "); /* ask to input */
    scanf("%u",&exponentNum); /* use %u to read unsigned */

    resultNum=integerPower(baseNum,exponentNum); /* calculate */

    printf("%d^%u=%1d",baseNum,exponentNum,resultNum); /* display the result */

    return 0; /* indicate successful termination */
} /* end function main */

/* function integerPower begins program execution */
long integerPower(int base, unsigned exponent){
    int i; /* counter */
    int result=base; /* result */

    if (exponent==1){
        return result; 
    } /* end if */
    else{
        for(i=1; i<exponent; i++){
            result = result * base; 
        }
        return result;
    } /* end else */
} /* end function integerPower */