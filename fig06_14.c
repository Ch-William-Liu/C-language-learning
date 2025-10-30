/* Fig 6.14: fig06_14.c
    Demonstrating the const type qualifirer with arrays */
#include <stdio.h>

/* function prototype */
void tryToModifyArray(const b[]);

/* function main begins program execution */
int main(void){
    int a[] = {10 , 20 , 30}; /* initialize a*/

    tryToModifyArray(a);

    printf("%d\t%d\t%d\n" , a[0] , a[1] , a[2]);
    return 0; /* indicates successful termination */
} /* end main */

/* In function tryToModifyArray, array b is const, so it cannot be used to modify the original array a in main.*/
void tryToModifyArray(const b[]){
    b[0] /= 2; /* error */
    b[1] /= 2; /* error */
    b[2] /= 2; /* error */
} /* end function tryToModifyArray*/