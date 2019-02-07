/*
 * Fills an array with user-entered input and then generates another array
 * which holds the cumulative sum of the elements of the first array
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>       // for pow()
#define BUFF_LEN 64     // Max length of a char array
#define ARRAY_SIZE 5

int main(void) {
    char input[BUFF_LEN];
    double inputNums[ARRAY_SIZE], cumulativeSums[ARRAY_SIZE];

    // Fill array with user input
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter a number > ");
        fgets(input, BUFF_LEN, stdin);
        inputNums[i] = atof(input);
    }

    // Populate cumulative sum array
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (i == 0) {
            cumulativeSums[i] = inputNums[i];
        }
        else {
            cumulativeSums[i] = cumulativeSums[i-1] + inputNums[i];
        }
    }

    // print results
    printf("Cumulative sums:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%6.2lf\t", cumulativeSums[i]);
    }
    printf("\n");

    printf("Goodbye!\n");
    return 0;
}