/*
 * Calculates the sum of the squares of an upper and lower bound 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>       // for pow()
#define BUFF_LEN 64     // Max length of a char array

int validLimit(int lowerLimit, int upperLimit);

// Strips newlines from given string
void strip(char *str);

int main(void) {
    char input[BUFF_LEN];
    int lowerLimit = 0, upperLimit = 1;
    long sum = 0;

    while (validLimit(lowerLimit, upperLimit)) {
        printf("Enter a lower limit > ");
        fgets(input, BUFF_LEN, stdin);
        lowerLimit = atoi(input);
        printf("Enter an upper limit > ");
        fgets(input, BUFF_LEN, stdin);
        upperLimit = atoi(input);

        // Exit if limits invalid
        if (lowerLimit >= upperLimit) {
            break;
        }

        // Sum the squares between the two limits
        for (int i = lowerLimit; i <= upperLimit; i++) {
            sum += pow(i, 2);
        }
        printf("The sums of the squares from %d to %d is %ld\n",\
            (int)pow(lowerLimit, 2), (int)pow(upperLimit, 2), sum);

        // Reset sum
        sum = 0;
    } 

    printf("Goodbye!\n");
    return 0;
}


void strip(char *str) {
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == '\n' || str[i] == '\t') {
            str[i] = '\0';
            return;
        }
    }
}

int validLimit(int lowerLimit, int upperLimit) {
    return(lowerLimit < upperLimit);
}