/* Exercise 4.28: exercises04_28.c
    Calculating weekly pay */
/* A company pays its emplioyees as :
    1. Managers: receive a fixed weekly salary
    2. Hourly worker: receive a fixed hourly wage for up to the first 40 hours they work and "time-and-a-half" (1.5 times their hourly wage) for overtime hours worked
    3. Commission workers: receive 250 plus 7.5% of their gross weekly sales 
    4. Pieceworker: receive a fixed amount of money each of the item they produce */
#include <stdio.h>

/* function main begins program execution */
int main(void){
    /* initialize */
    int paycode;
    int paycode1Count=0;
    int paycode2Count=0;
    int paycode3Count=0;
    int paycode4Count=0;

    printf("Enter the paycode. \n");
    printf("Enter the EOF character to end input.\n"); /* ctrl+z*/

    while ((paycode=getchar())!=EOF){
        switch (paycode){
        case '1':
            /* code */
            paycode1Count++;
            break;
        
        case '2':
            paycode2Count++;
            break;
        

        case '3':
            paycode3Count++;
            break;

        case '4':
            paycode4Count++;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;
        
        default: /* catch all other characters */
            printf("Please ernter the right paycode :<\n");
            printf("Try again!\n");
            break;
        } /* end switch */
    } /* end while */
    printf("Total count:\n");
    printf("Paycode1\tPaycode2\tPaycode3\tPaycode4\n");
    printf("%d\t\t%d\t\t%d\t\t%d\n",paycode1Count,paycode2Count,paycode3Count,paycode4Count);

    return 0; /* indicate that program ended successfully*/
} /* end function main */