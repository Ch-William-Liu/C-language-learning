/* Exercise 03.17: exercises03_17.c 
    Drivers are concerned with the mileage obtained by their autobiles.
    One drivers has kept track of servel tankfuls of gasoline by recording miles driven and gallons used for each tankful.
    Develop a program that will input the miles driven and gallons used for each tankful.
    The program should calculate and display the miles per gallon obtained for each tankful.
    After processing all input information, the program should calculate and print the combined miles per gallon obtained for all tankfuls.
*/

/* Example:
    Enter the gallons used (-1 to end): 12.8
    Enter the miles driven: 287
    The miles/gallon for this tank was 22.421875

    Enter the gallons used (-1 to end): 10.3
    Enter the miles driven: 200
    The miles/gallon for this tank was 19.417475

    Enter the gallons used (-1 to end): 5
    Enter the miles driven: 120
    The miles/gallon for this tank was 24.000000

    Enter the gallons used (-1 to end): -1

    The overall average miles/gallon was 21.601423
*/
#include <stdio.h>

/* function main begins program execution */
int main(void){
    float gallon; /* store gallon for each tankful */
    float mile; /* store mile for each tankful */
    float gallonInTotal; /* total gallon of all tankful */
    float mileInTotal; /* total miles of all tankful */
    float milePerGallon; /* miles/gallon*/
    float milePerGallonTotal; /* total result */

    /* initialize the variables */
    gallon = 0; 
    mile = 0; 
    gallonInTotal = 0;
    mileInTotal = 0;
    milePerGallon=0;
    
    /* for the first input */
    printf("Enter the gallons used (-1 to end): "); /* prompt to input */
    scanf("%f", &gallon); /* read the input */

    while (gallon != -1){
        /* code */
        /* print the mile/gallon result of last input*/
        printf("Enter the miles driven: "); /* prompt to input */
        scanf("%f",&mile); /* read the input */
        milePerGallon = mile / gallon; /* calculate the mile/gallon */

        printf("The miles/gallon for this tank was : %.6f\n",milePerGallon); /* display the result */
        printf("=================================================================\n");

        gallonInTotal =gallonInTotal + gallon; /* add gallon*/
        mileInTotal = mileInTotal + mile; /* add mile*/
        
        /* read next input */
        printf("Enter the gallons used (-1 to end): "); /* prompt to input */
        scanf("%f", &gallon); /* read the input */

    } /* end while */
    

    if (gallon == -1){
        /* code */
        milePerGallonTotal = mileInTotal / gallonInTotal; /* calculate the result */
        printf("The overall average miles/gallon was: %.6f\n",milePerGallonTotal); /* display the result */
    } /* end if*/
    
    return 0; /* indicated that program ended successfully */
} /* end function main */
