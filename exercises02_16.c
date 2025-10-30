/* Exercise 02.16: exercises02._16.c
    Write a program that asks the user to enter two numbers, obtains them from the user 
    and prints their sum, product, difference, quotient and reminder. */
#include <stdio.h>

/* funnction main begins program execution */
int main(void){
    int number1; /* first number input by user */
    int number2; /* second number input by user */
    int sum_number; /* stored the added number */
    int prod_number; /* stored the producted number */
    int diff_number; /* stored the diffed number */
    int quot_number; /* stored the quotiented number*/
    int remi_number; /* stored the reminder number*/

    printf("Please enter two numbers:"); /* prompt */
    scanf("%d%d" , &number1 , &number2); /* read the integers */

    sum_number = number1 + number2; /* calculate the sum */
    prod_number = number1 * number2; /* calculate the product */
    diff_number = number1 - number2; /* calculate the difference */
    quot_number = number1 / number2; /* calculate the quotient */
    remi_number = number1 % number2; /* calcualte the reminder */

    /* Print the results in the terminal*/
    printf("\nResults:\n");
    printf("The sum is : %d\n" , sum_number);
    printf("The product is : %d\n" , prod_number);
    printf("The difference is : %d\n" , diff_number);
    printf("The quotient is : %d\n" , quot_number);
    printf("The reminder is : %d\n" , remi_number);

    return 0; /* indicate that program ended successfully */
} /* end function main */