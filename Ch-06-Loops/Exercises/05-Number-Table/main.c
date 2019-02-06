/*
 * Prints a table consisting of an integer, its square, and its cube.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>       // for pow()
#define BUFF_LEN 64     // Max length of a char array
#define RANGE_LIMIT 100

int validLimit(int lowerLimit, int upperLimit);

int main(void) {
    int lowerLimit = 0, upperLimit = 0; // Range for table to be printed
    char input[BUFF_LEN];

    //Get user input:
    while (!validLimit(lowerLimit, upperLimit)) {
        printf("Enter a lower limit for the table > ");
        fgets(input, BUFF_LEN, stdin);
        lowerLimit = atoi(input);
        printf("Enter an upper limit for the table (must be within %d)"
        " of the lower limit) > ", RANGE_LIMIT);
        fgets(input, BUFF_LEN, stdin);
        upperLimit = atoi(input);

        if (!validLimit(lowerLimit, upperLimit)) {
            printf("Error: limits not valid. Please try again.\n");
        }
    }

    // Print table
    // Print table header
    printf("%15s%15s%15s\n", "Number", "Square", "Cube");
    for (int i = lowerLimit; i <= upperLimit; i++) {
        printf("%15d%15d%15d\n", i, (int)pow(i,2), (int)pow(i,3));
    }

    return 0;
}

int validLimit(int lowerLimit, int upperLimit) {
    return ( 
        (lowerLimit < upperLimit) && 
        ((upperLimit - lowerLimit) <= RANGE_LIMIT)
    );
}