/* Exercise 6.19: exercises06_19.c
    Dice Rolling */
/* 
    The program should use rand to roll the fisrt dice and use rand to roll the second
    ---------------------------------
    |       1   2   3   4   5   6   |
    |   +---------------------------|
    | 1 |   2   3   4   5   6   7   |
    | 2 |   3   4   5   6   7   8   |
    | 3 |   4   5   6   7   8   9   |
    | 4 |   5   6   7   8   9   10  |
    | 5 |   6   7   8   9   10  11  |
    | 6 |   7   8   9   10  11  12  |
    ---------------------------------

    roll two dice 3600 times ,use a single-subscripted array to tally the numbers of times each possible sum appears.
    print the results in a tabluar format.
    determine if the totals are reasonable.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define arraySize 11


/* function prototype */
int rollDice(void); 
void printResult(const int result2print[]);

/* function main begins program execution */
int main(void){
    int rollTimes = 36000; /* total time of roll dice */
    int diceSum; /* sum of two dice */
    int i; /* counter to roll dice */
    int result[arraySize] = {0}; /* store the index of */
    int diceValue1 , diceValue2; /* store the value */

    /* randomize random number generator using current time */
    srand(time(NULL));
    for (i = 0; i <= rollTimes; i++){
        diceValue1 = rollDice();
        diceValue2 = rollDice();

        diceSum = diceValue1 + diceValue2;
        
        result[diceSum - 2] += 1; /* add one time for the result */
    } /* end for */

    printResult(result);

    return 0; 
} /* end function main */

/* roll dice */
int rollDice(void){
    int dice;

    dice = 1 + (rand() % 6);
    return dice;
} /* end function rollDice*/

/* print the result in tabular */
void printResult(const int result2print[]){
    int i; /* counter */
    printf("\t");
    for (i = 0; i < arraySize; i++){
        printf("\t%d" , i + 2);
    } /* end for */
    printf("\nResult:\t");

    for (i = 0; i < arraySize; i++){
        printf("\t%d" , result2print[i]);
    } /* end for */
    printf("\nDistribution:");
    for (i = 0; i < arraySize; i++){
        printf("\t%.2f%%" , (result2print[i] / 36000.0) * 100);
    } /* end for */
} /* end function printResult */