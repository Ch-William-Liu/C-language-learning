/* Exercise 5.24: exercises05_24.c
    Temperature conversions */
/* 
Implement the following inreger function:
a). Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
b). Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
c). Use these functions to write a program that prints chars showing: 
    1). The Fahrenheit equivalent of all Celsius temperatures from 0~100 degrees.
    2.) The Celsius equivalent of all Fahrenheits temperatures from 32~212 degrees.
    Print the outputs in a neat tabular format that minimizes the number of lines of output while readable.
*/

#include <stdio.h>

/* function prototype */
double celsius(double fahrenheitDegree); /* F -> C */
double fahrenheit(double celsiusDegree); /* C -> F */

/* function main begins program execution */
int main(void){
    /* initialize */
    int c,f;

    printf("Table of Temperature Conversions:\n");
    printf("\tCelsius | Fahrenheit\n");
    for (c=0; c<=100; c++){
        printf("\t%8d|%7.3f\n",c,fahrenheit(c));
    } /* end for */
    printf("===========================================\n");
    printf("\tFahrenheit | Celsius\n");
    for (f=32; f<=212; f++){
        printf("\t%11d|%4.3f\n",f,celsius(f));
    } /* end for */
} /* end function main */

/* function celsius begins program execution */
double celsius(double fahrenheitDegree){
    return ((fahrenheitDegree-32)*5.0/9.0);
} /* end function celsius */

/* function fahrenheit begins program execution */
double fahrenheit(double celsiusDegree){
    return ((celsiusDegree*9.0/5.0)+32);
} /* end function fahrenheit */
