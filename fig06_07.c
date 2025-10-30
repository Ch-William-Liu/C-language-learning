/* Fig 6.7: fig06_07.c
    Using array to summarize survey results */

/* Forty students were asked to rate the quality if the food in the student cafeteria on a scale of 1 to 10
    (1 means awful and 10 means excellent). 
    Place the 40 responses in an integer array and summarize the results of the poll */

#include <stdio.h>
#define RESULTS_SIZE 40 /* defining array size */
#define FREQUENCY_SIZE 11 /* rating from 1 to 10, and we ignore [0]*/

/* function main begins program execution */
int main(void){
    int answer; /* counter to loop through 40 responses */
    int rating; /* counter to loop through frequencies 1 to 10 */

    /* initialize frequency counters to 0 */
    int frequency[FREQUENCY_SIZE] = {0};

    /* place the survey responses in the responses array */
    int responses[RESULTS_SIZE] = {1 , 2 , 6 , 4 , 8 , 5 , 9 , 7 , 8 , 10 , 1 , 6 , 3 , 8 , 6 , 10 , 3 , 8 , 2 , 7 , 6 , 5 , 7 , 6 , 8 , 6 , 7 , 5 , 6 , 6, 5 , 6 , 7 , 5 , 6 , 4 , 8 , 6 , 8 , 10};

    /* for each answer, select value of an element of array responses and use that value as subscript in array frequency to determine element to increment */
    for (answer = 0; answer < RESULTS_SIZE; answer++){
        /* code */
        ++frequency[responses[answer]];
    } /* end for */
    
    /* display the result */
    printf("%s%17s\n" , "Rating" , "Frequency");

    /* output the frequencies in a tabular format */
    for (rating = 1; rating < FREQUENCY_SIZE; rating++){
        /* code */
        printf("%6d%17d\n" , rating , frequency[rating]);
    } /* end for */
    
    return 0; /* indicates successful termination */
} /* end main */
