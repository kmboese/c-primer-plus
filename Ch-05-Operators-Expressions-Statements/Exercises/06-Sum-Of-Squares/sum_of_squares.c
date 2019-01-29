/* Computes the sum of n squares. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_LEN 64

int main(void) {
    char input[BUFF_LEN];
    int timePeriods = 0;
    unsigned long int sum = 0;

    printf("Please enter a time period length (n) over which to sum "
        "the squares from 1 to n:\n");
    fgets(input, BUFF_LEN, stdin);
    timePeriods = strtol(input, NULL, 0);

    if (timePeriods <= 0) {
        printf("Time period must be a positive number! Exiting...\n");
        return -1;
    }

    // Summation loop. Note that this is equivalent to (n*(n+1))/2.
    while (timePeriods >= 1) {
        sum += (timePeriods*timePeriods);
        timePeriods--;
    }

    printf("Sum of values is %ld\n", sum);


    return 0;
}