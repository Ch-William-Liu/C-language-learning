/* Exercise 4.27: exercises04_27.c
    Pythagorean Triples.
    A right triangle can have sides that are all integers. The set of three iinteger values for the sides of a right triangle is call Pythagorean triple
    These three sides must satify the relationship that the sum of the squares of two the sides iis equal to the square of the hypotenuse.
    Find all Pythagorean triples for side1, side2 and the hypotenuse all no larger than 500.
    
    Use a triple-nested for loop that simply tries all possibilities.
*/
#include <stdio.h>
#include <math.h>

/* function main begins program execution */
int main(void){
    /* initialize variable */
    int side1;
    int side2;
    int hypotenuse ;
    int squareSide1;
    int squareSide2;
    int squarehypotenuse;
    int sumSide1Side2;
    int totalCount=0; 

    for (side1=1; side1<=500; side1++){
        for (side2=side1; side2<=500; side2++){
            for (hypotenuse =1; hypotenuse <=500; hypotenuse ++){
                /* calculate the square of each side */
                squareSide1=pow(side1,2);
                squareSide2=pow(side2,2);
                squarehypotenuse =pow(hypotenuse ,2);

                sumSide1Side2 = squareSide1 + squareSide2; /* calculate the sum of side1 and side2*/
                
                if (sumSide1Side2==squarehypotenuse){
                    printf("Side 1: %d, Side 2: %d, Side 3: %d\n",side1,side2,hypotenuse); /* print the soultion */
                    printf("=========\n");
                    totalCount++;
                    break; /* skip the side3 to next side */
                } /* end if */
            } /* end for */
        } /* end for */
    } /* end for */

    printf("Total number of triples under 500 is : %d\n",totalCount);
    return 0; /* indicate that program ended successfully*/
} /* end function main */ 