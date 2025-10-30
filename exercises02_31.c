/* Exercise 02.31: exercises02_31.c
    Using only the techniques you learned in this chapter,
    wirte a program that calculated the squares and cubes of the numbers from 0 to 10 
    and uses tabs to print the following table of values */
#include <stdio.h>

/* function main begins program execution */
int main(void){
    printf("Showing the table of squares and cubes from 1 to 10:\n");
    printf("Number\tSquare\tCube\n");
    printf("%d\t%d\t%d\n" , 0 , 0*0 , 0*0*0);
    printf("%d\t%d\t%d\n" , 1 , 1*1 , 1*1*1);
    printf("%d\t%d\t%d\n" , 2 , 2*2 , 2*2*2);
    printf("%d\t%d\t%d\n" , 3 , 3*3 , 3*3*3);
    printf("%d\t%d\t%d\n" , 4 , 4*4 , 4*4*4);
    printf("%d\t%d\t%d\n" , 5 , 5*5 , 5*5*5);
    printf("%d\t%d\t%d\n" , 6 , 6*6 , 6*6*6);
    printf("%d\t%d\t%d\n" , 7 , 7*7 , 7*7*7);
    printf("%d\t%d\t%d\n" , 8 , 8*8 , 8*8*8);
    printf("%d\t%d\t%d\n" , 9 , 9*9 , 9*9*9);
    printf("%d\t%d\t%d\n" , 10 , 10*10 , 10*10*10);

    return 0; /* indicate that program ended successfully */
} /* end function main */