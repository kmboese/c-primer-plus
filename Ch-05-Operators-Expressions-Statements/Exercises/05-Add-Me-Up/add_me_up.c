/* Adds up number incrementally increasing, for n time periods. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_LEN 64

int main(void) {
    char input[BUFF_LEN];
    unsigned int timePeriods = 0;
    unsigned long int sum = 0;

    printf("Please enter a time period length over which to sum values > ");
    fgets(input, BUFF_LEN, stdin);
    timePeriods = strtol(input, NULL, 0);

    // Summation loop. Note that this is equivalent to (n*(n+1))/2.
    for (int i = 1; i <= timePeriods; i++) {
        sum += i;
    }

    printf("Sum of values is %ld\n", sum);


    return 0;
}