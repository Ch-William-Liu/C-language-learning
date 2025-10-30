/* Exercise 02.32: exercises02_32.c
    Create a BMI calculator application that reads user's weight and height,
    then calcualte and display the user's body mass index.
    Also, the applicaiton should display the following information from ~ so user could evaluate his/her BMI*/
#include <stdio.h>

/* function main begins program execution */
int main(void){
    float weight; /* stored the input weight by user */
    float height; /* store the input height by user */
    float bodyMassIndex; /* store the output BMI value of user */

    printf("Please enter your height in meter:"); /* prompt */
    scanf("%f" , &height); /* read the input of height */
    printf("Please enter your weight in kilogram:"); /* prompt */
    scanf("%f" , &weight); /* read the input of weight */

    bodyMassIndex = weight / (height * height); /* calculate the BMI */
    
    /*print the result*/
    printf("===========\n");
    printf("Your height:\t%.2f\n" , height);
    printf("Your weight:\t%.2f\n" , weight);
    printf("Your BMI:\t%.2f\n",bodyMassIndex);

    /* get the information to evaluate BMI*/
    if (bodyMassIndex < 18.5){
        printf("You are underweight.\n");
    } /* end if */

    if (bodyMassIndex >= 18.5 && bodyMassIndex <= 24.9){
        printf("You are normal.\n");
    } /* end if */

    if (bodyMassIndex >= 25 && bodyMassIndex <=29.9){
        printf("You are overweight.\n");
    } /* end if */

    if (bodyMassIndex >= 30){
        printf("You are obese.\n");
    } /* end if */

    return 0; /* indicate that program ended successfully */
} /* end function main */