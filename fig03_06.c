/* Fig 3.6: fig03_06.c 
    Class average program with counter-controlled repetition */
#include <stdio.h>

/* function main begins program execution */
int main(void){
    float grade; /* grade value*/
    float totalGrade; /* sum of total grade */
    float averageGrade; /* average grade */
    int counter; /* numbers of grade to be entered */
    
    totalGrade=0; /* initial total grade */
    counter=0; /* initial total counter */

    /* processing phase */
    while (counter < 10){ /* loop for 10 times*/
        /* code */
        counter = counter + 1; /* increment counter */
        printf("Enter grade of student %d: " , counter); /* prompt for input */
        scanf("%f" , &grade); /* read grade from user */
        totalGrade = totalGrade + grade; /* add the grade to total grade */
    } /* end while */
    
    /* termination phase */
    averageGrade = totalGrade / counter; /* calculate the average grade */

    printf("Class average is %.2f\n" , averageGrade); /* display result */

    return 0; /* indicate that program ended successfully */
} /* end function main */