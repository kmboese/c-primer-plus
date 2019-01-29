/* Computes the cube of a floating point number */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_LEN 64

float cube(float val);

int main(void) {
    char input[BUFF_LEN];
    float val = 0.0f, cubedVal = 0.0f;

    // Get user input
    printf("Please enter a floating point number > ");
    fgets(input, BUFF_LEN, stdin);
    val = atof(input);

    // Compute cube of value
    cubedVal = cube(val);

    // Print result
    printf("The cube of %.3f is %.3f\n", val, cubedVal);


    return 0;
}

float cube(float val) {
    return val*val*val;
}