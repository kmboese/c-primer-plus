/*
 * Calculates two different mathematical series.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFF_LEN 64     // Max length of a char array
#define NUM_INTERVALS 5

int main(void) {
    char input[BUFF_LEN];
    // Number of terms in the series to be calculated
    int terms = 0;      
    // interval value at which the computed value is printed
    int intervalValue = 0;  
    double evenSeries = 0.0, oddSeries = 0.0;

    printf("Enter a number to limit the number of terms calculated > ");
    fgets(input, BUFF_LEN, stdin);
    terms = atoi(input);
    intervalValue = terms/NUM_INTERVALS;

    for (int i = 1; i <= terms; i++) {
        // Always sum for even series
        evenSeries += (1.0/(double)i);
        // Alternate between addition and subtraction for odd series
        if (i%2 == 0) {
            oddSeries -= 1.0/(double)i;
        }
        else {
            oddSeries += 1.0/(double)i;
        }

        // Print output at certain intervals
        if (i % intervalValue == 0) {
            printf("Even series: %lf\tOdd series: %lf\t[%d calculations]\n", \
                evenSeries, oddSeries, i);
        }
    }

    printf("Note: The even series is the divergent harmonic series, while "
    "the odd series is an alternating series having \n");
    printf("the sum ln(2).\n");

    printf("Goodbye!\n");
    return 0;
}