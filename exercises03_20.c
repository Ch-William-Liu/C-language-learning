/* Exercise 03.20: exercises03_20.c
    The simple interest on a loan is calculated by the formula:
        interest = principal * rate * days / 365;
    The preceding formula assumes that rate is the annual interest rate, and therefore includes the division by 365 (days).
    Develop a program that will input principal, rate and days for several loans,
    and will calculate and display the simple interest for each loan, using the preceding formula.
*/

/* Example:
    Enter load principal (-1 to end): 1000.00
    Enter interest rate: .1
    Enter term of the loan in days: 365
    The interest charge is $100.00

    Enter load principal (-1 to end): 1000.00
    Enter interest rate: .08375
    Enter term of the loan in days: 224
    The interest charge is $51.40

    Enter load principal (-1 to end): 10000.00
    Enter interest rate: .09
    Enter term of the loan in days: 1460
    The interest charge is $3600.00

    Enter load principal (-1 to end): -1
*/
#include <stdio.h>

/* function main begins program execution */
int main(void){
    /* initialize variables*/
    float principal;
    float interestRate;
    int loanInDays;
    float interestCharge=0;

    printf("Enter load principal (-1 to end):"); /* prompt to input */
    scanf("%f",&principal); /* read the input */
    while (principal != -1){
        /* code */
        printf("Enter interest rate: "); /* prompt to input */
        scanf("%f",&interestRate); /* read the input */
        printf("Enter term of the loan in days: "); /* prompt to input */
        scanf("%d",&loanInDays); /* read the input */
        
        interestCharge = principal * interestRate * loanInDays /365; /* calculate the result */
        
        printf("The interest charge is $%.2f\n",interestCharge); /* display the result */
        printf("====================================================\n");
        printf("Enter load principal (-1 to end):"); /* prompt to input */
        scanf("%f",&principal); /* read the input */    
    } /* end while*/
    
    return 0; /* indicate that program ended successfully */
} /* end function main */