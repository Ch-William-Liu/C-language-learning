/* Fig 3.8: fig03_08.c
    Class average program with sentinel-controlled repetition */
#include <stdio.h>

/* function main begins program execution */
int main(void){
    float grade; /* grade value */
    float totalGrade; /* sum */
    int counter; /* numbers of grades input */
    float averageGrade; /* average value of grade */

    /* initialization phase */
    totalGrade=0; /* initial total */
    counter=0; /* initial counter */

    /* processing phase */
    /* get first grade from user */
    printf("Enter grade of student %d, enter -1 to quit: " , counter+1); /* prompt to input */
    scanf("%f" , &grade); /* read grade from user */

    /* loop while sentinel value not yet read from user */
    while (grade != -1){
        /* code */
        totalGrade = totalGrade + grade; /* add the grade into totalGrade */
        counter += 1; /* increment counter */
        
        /* get another grade from user */
        printf("Enter grade of student %d, enter -1 to quit: " , counter+1); /* prompt to input */
        scanf("%f" , &grade); /* read grade from user */
    } /* end while */

    /* termination phase */
    /* if user entered the last grade */
    if (counter != 0){
        /* code */
        /* calculate the average of all grades entered */
        averageGrade = totalGrade / (counter);

        /* display the result to user */
        printf("The average grade of %d student is: %.2f\n", counter , averageGrade); 
    } /* end if */
    else { /* if no grade were entered, output message */
        printf("There is no grade inputed.\n");
    } /* end else */
    
    return 0; /* indicate that program ended successfully */
} /* end function main */