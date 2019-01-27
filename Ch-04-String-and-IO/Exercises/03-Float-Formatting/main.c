/* Program that reads in a float and prints it out using various types of
formats */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFF_LEN 64

int main(void) {
    char input[BUFF_LEN];
    float val = 0.0f;

    printf("Please enter a floating point number > ");
    fgets(input, BUFF_LEN, stdin);
    val = atof(input);

    /* Print using different amounts of sig figs and using different 
    exponentiation formats.*/
    printf("The input is %2.1f or %.1e\n", val, val);
    printf("The input is %+2.3f or %.3E\n", val, val);


    return 0;
}