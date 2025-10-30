/* Exercise 03.18: exercises03_18.c
    Develop a C program that will determine if a department store customer has exceeded the credit limit on a charge account.
    For each customer, the following facts are availabe:
        a). Account number
        b). Balance at the beginning of the month
        c). Total of all items charged of the month
        d). Total of all credits applied to this customer's account this month
        e). Allowed credit limit
    The program should input each of these facts, calculate the new balance (=beginning balance + charges - credits),
    and determine if the new balance exceeds the customer's credit limit.
    For those customers whose credit limit is exceeded, the program should display the customer's account number, credit limit, new balance
    and the message "Credit limit exceeded."
*/

/* Example:
    Enter account number (-1 to end): 100
    Enter beginning balance : 5394.78
    Enter total charges : 1000.00
    Enter total credit : 500.00
    Enter credit limit : 5500.00
    Acount :        100
    Credit limit:   5500.00
    Balance:        5894.78
    Credit Limit Exceeded.

    Enter account number (-1 to end): 200
    Enter beginning balance : 1000.00
    Enter total charges : 123.45
    Enter total credit : 321.00
    Enter credit limit : 1500.00

    Enter account number (-1 to end): 300
    Enter beginning balance : 500.00
    Enter total charges : 274.73
    Enter total credit : 100.00
    Enter credit limit : 800.00

    Enter account number (-1 to end): -1
*/
#include <stdio.h>

/* function main begins program execution */
int main(void){
    /* initialze variables */
    int accountNumber; 
    float beginningBalance; 
    float totalCharges;
    float totalCredit;
    float creditLimit;
    float newBalance=0;

    printf("Enter account number (-1 to end): "); /* prompt to input */
    scanf("%d",&accountNumber); /* read the input */
    while (accountNumber != -1){
        /* code */
        printf("Enter beginning balance: "); /* prompt to input */
        scanf("%f",&beginningBalance); /* read the input*/
        printf("Enter total charges: "); /* prompt to input */
        scanf("%f",&totalCharges); /* read the input */
        printf("Enter total credit: "); /* prompt to input */
        scanf("%f",&totalCredit); /* read the input */
        printf("Enter credit limit: "); /* prompt to input */
        scanf("%f",&creditLimit); /* read the input */

        newBalance = beginningBalance + totalCharges - totalCredit; /* calculate the new balance */

        if (newBalance > creditLimit){
            /* code */
            printf("Account:\t%d\n",accountNumber);
            printf("Credit Limit:\t%.2f\n",creditLimit);
            printf("Balance:\t%.2f\n",newBalance);
            printf("Credit Limit Exceeded.\n");
        } /* end if */
        printf("Enter account number (-1 to end): "); /* prompt to input */
        scanf("%d",&accountNumber); /* read the input */

    } /* end while */
    
    return 0; /* indicate that function ended successfully */
} /* end function main*/