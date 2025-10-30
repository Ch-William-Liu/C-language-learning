/* Fig 4.5: fig04_05.c
    Summation with for */
#include <stdio.h>

/* function main begins program execution */
int main(void){
    int sum=0; /*initialize sum */
    int number; /* define number */

    for (number = 2; number <= 100; number+=2){
        /* code */
        sum += number; /* calculate the sum*/
    } /* end for */

    /* the for statement could write as the following:
    
    for (number =2; number <=100; sum +=number, number+=2);

    */

    printf("Sum is %d\n",sum); /* display the result */

    return 0; /* indicate that program ended successfully */
} /* end function main */