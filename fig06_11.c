/* Fig 6.11: fig06_11.c
    Static arrays are initialized to zero */
#include <stdio.h>

/* function prototype */
void staticArrayInit(void);
void automaticArrayInit(void);

/* function main begins program execution */
int main(void){
    printf("First call to each function:\n");
    staticArrayInit();
    automaticArrayInit();

    printf("\n\nSecond call to each function:\n");
    staticArrayInit();
    automaticArrayInit();

    return 0; /* indicates successful termination */
} /* end main */

void staticArrayInit(void){
    /* initializes elements to 0 first time function is called */
    static int array1[3];
    int i; /* counter */

    printf("\nValues on entering staticArrayInit:\n");

    /* output contents of array1 */
    for (i = 0; i <= 2; i++){
        /* code */
        printf("array1[%d] = %d ", i , array1[i]);
    } /* end for */

    printf("\nValues on exiting staticArrayInit:\n");

    /* modify and output contents of array1 */
    for ( i = 0; i <= 2; i++){
        /* code */
        printf("array1[%d] = %d ", i , array1[i] += 5);
    } /* end for */
} /* end function staticArrayInit */

void automaticArrayInit(void){
    /* initializes elements to 0 first time function is called */
    int array2[3] = {1 , 2 , 3};
    int i; /* counter */

    printf("\n\nValues on entering automaticArrayInit:\n");

    /* output contents of array2 */
    for ( i = 0; i <= 2; i++){
        /* code */
        printf("array2[%d] = %d ", i , array2[i]);
    } /* end for */

    printf("\nValues on exiting automaticArrayInit:\n");

    /* modify and output contents of array2 */
    for ( i = 0; i <= 2; i++){
        /* code */
        printf("array2[%d] = %d ", i , array2[i] += 5);
    } /* end for */
} /* end fumction automaticArrayInit */