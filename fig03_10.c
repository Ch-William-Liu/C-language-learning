/* Fig 3.10: fig03_10.c
    Analysis of exmination results */
#include <stdio.h>

/* function main begins program execution*/
int main(void){
    /* initialize variables in definitions */
    int studentNumber = 1; /* student number for counter */
    int passedNumber = 0; /* numbers of passed student */
    int failedNumber = 0; /* numbers of failed student */
    int result; /* one exam result */

    /* process 10 students using counter-controlled loop */
    while (studentNumber <= 10){
        /* code */
        /* prompt user for input and obtain value from user*/
        printf("Enter result (pass=1, failed=2): ");
        scanf("%d", &result);
        
        if (result == 1){ /* if result 1, increment pass*/
            /* code */
            passedNumber += 1; /* add one student to passed */
            studentNumber += 1; /* add counter */
        } /*end if */
        else if (result ==2){ /* if result 2, increment fail*/
            /* code */
            failedNumber += 1; /* add one student to failed */
            studentNumber += 1; /* add counter */
        } /* end else if */
        else {/* for other situation */
            /* code */
            printf("Please input the right input.\n");
        } /* end else*/
        
    } /* end while */
    

    printf("Passed student number : %d.\n", passedNumber); /* display the passed number */
    printf("Failed student number : %d.\n", failedNumber); /* display the failed number */
        
    /* if more than 8 students passed -> Bonus*/
    if (passedNumber > 8){
        /* code */
        printf("Bonus to instructor!\n");
    } /* end if */
    return 0; /* indicate that program ended sucessfully */
} /* end function main */