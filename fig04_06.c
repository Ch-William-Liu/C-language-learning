/* Fig 4.6: fig04_06.c 
    Calculating compound interest */
#include <stdio.h>
#include <math.h>

/* function main begins program execution */
int main(void){
    double amount; /* amount on deposit */
    double principal=1000.0; /* starting principal */
    double rate= .05; /* annual interest rate */
    int year; /* year counter */

    /* output table column head */
    printf("%4s%21s\n","Year","Amount on deposit");

    /* calculate amount on deposit for each of ten years */
    for (year = 1; year <= 10 ; year++){
        /* code */
        amount=principal*pow(1.0 + rate, year); /* calculate new amount each year */ /* and this is the way to calculate the power in C */
        printf("%4d%21.2f\n",year,amount); /* display the result */
    } /* end for */
    
    return 0; /* indicate that program ended successfully */
} /* end function main */