/* Fig 6.18: fig06_18.c
    Linear search of an array */
#include <stdio.h>
#define SIZE 100

/* function prototype */
int linearSearch(const int array[] , int key , int size);

/* function main begins program execution */
int main(void){
    int a[SIZE]; /* create array */
    int x; /* counter for initializing elements of array a */
    int searchkey; /* value of locate in array a */
    int element; /* varable to hold location of searchKey or -1 */

    /* create data */
    for (x = 0; x <=SIZE; x++){
        a[x] = 2 * x;
    } /* end for */

    printf("Enter integer search key:\n");
    scanf("%d" , &searchkey);

    /* attempt to locate searchKey in array a */
    element = linearSearch(a , searchkey , SIZE);

    /* display result */
    if (element != -1){
        printf("Found value in element %d.\n" , element);
    } /* end if */
    else {
        printf("Value not found.\n");
    } /* end else */

    return 0; /* indicates successful termination */
} /* end main */

/* compare key to every element of array until the location is found or until the end of array is reached.
    Return subscript of element if key or -1 is not found */
int linearSearch(const int array[] , int key , int size){
    int n; /* counter */

    /* loop through array */
    for (n = 0; n <= size; n++){
        if (array[n] == key){
            return n; /* return location key */
        } /* end if */
    } /* end for */

    return -1; /* key not found */
} /* end function linearSearch */