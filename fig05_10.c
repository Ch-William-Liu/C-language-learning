/* Fig 5.10: fig05_10.c
    Craps */
/* 
A player rolls two dice. Each dice has six faces. These faces contains 1~6 spots. After the dice have come to rest, the sum of the spots on the two upward faces is calculated.
Sum of first two dice throwed:
7, 11 -> player win
2, 3, 12 -> player lose 
other -> the summation is "Point", player must "make the point " before throw a 7
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* enumeration constants represent gane status */
enum Status{ CONTINUE, WON, LOST}; /* CONTINUE=0, WON=1, LOST=2...*/ /* 定義了一個新的類型叫做 enum Status，後續宣告的變數都會是包含這些東西 */
int rollDice(void); /* function prototype */

/* function main begins program execution */
int main(void){
    int sum; /* sum of rolled dice */
    int myPoint; /* point earned */

    enum Status gameStatus; /* can contain CONTINUE, WON or LOST*/

    /* randomize random number generator using current time */
    srand(time(NULL));
    sum=rollDice(); /* first roll of the dice */

    /* determine game status based on sum of dice */
    switch (sum){
        /* win on the first roll */
        case 7:
        case 11:
            gameStatus=WON;
            break;
        
        /* lost on the first roll */
        case 2:
        case 3:
        case 12: 
            gameStatus=LOST;
            break;
        
        /* remember point */
        default:
            gameStatus=CONTINUE;
            myPoint=sum; 
            printf("Point is %d\n",myPoint);
            break; /* optional */
    } /* end switch */

    /* while game not complete */
    while (gameStatus==CONTINUE){
        sum=rollDice(); /* roll dice again */
        
        /* determine game status */
        if (sum==myPoint){ /* win by making point */
            gameStatus=WON; /* game over, player won */
        } /* end if */
        else if (sum==7){ /* lose by rolling 7 */
            gameStatus=LOST; /* game over, player lost*/
        } /* end else if */
    } /* end while */
    
    /* display won or lost message */
    if (gameStatus==WON){ /* did player win? */
        printf("Player wins\n");
    } /* end if */
    else {
        printf("Player loses.\n");
    } /* end else */

    return 0; /* indicate that successful termination */
} /* end function main */

/* rolldice, calculate sum and display results */
int rollDice(void){
    int dice1; /* first dice */
    int dice2; /* second dice */
    int workSum; /* sum of dice */

    dice1=1+(rand()%6); /* pick random dice1 value */
    dice2=1+(rand()%6); /* pick random dice2 value */

    workSum = dice1 + dice2; /* sum of two dice */

    /* display results of this roll */
    printf("Player rolled %d + %d = %d\n",dice1,dice2,workSum);
    
    return workSum; /* return sum of dice */
} /* end function rollDice */