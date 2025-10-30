/* Exercise 02.18: exercises02_18.c
    Write a program that asks the user to enter two integers, botains the numbers from the user, 
    then prints the larger number followed by the word 'is larger.' 
    If the numbers are equal, print the message 'These numbers are equal.'
    Use only the signle-seclection form of the if statement you learned in this chapter.*/
#include <stdio.h>

/* function main begins program execution*/
int main(void){
    int num1 , num2; /* stored the integers inputed by the user */

    printf("Please enter two integers : "); /* prompt */
    scanf("%d%d" , &num1 , &num2); /* read the integers */

    if (num1 == num2){
        printf("These numbers are equal.\n"); /* print the result of num1=num2 */
    } /* end if */

    if (num1 > num2){
        printf("%d is larger.\n" , num1); /* print the result of num1 is larger */
    } /* end if */

    if (num1 < num2){
        printf("%d is larger.\n" , num2); /* print the result of num2 is larger */
    } /* end if */

    return 0; /* indicate that program ended successfully */
} /* end function main*/
