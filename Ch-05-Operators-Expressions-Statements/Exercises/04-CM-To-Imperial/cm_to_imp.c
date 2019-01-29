/* main.c is a C language program! */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_LEN 64
#define CM_TO_IN 0.393701
#define IN_PER_FT 12

int main(void) {
    char input[BUFF_LEN];
    double cm = 0.0, totalInches = 0.0;
    int feet = 0;
    double inches = 0.0;

    printf("\nEnter a height in centimeters > ");
    fgets(input, BUFF_LEN, stdin);
    cm = atof(input);
    totalInches = cm*CM_TO_IN;
    feet = (int)totalInches/IN_PER_FT;
    inches = totalInches - (double)feet*IN_PER_FT;

    while (cm > 0.0) {
        printf("%.2lf cm = %d feet, %.2lf inches\n", \
            cm, feet, inches);
        
        // Get user input
        printf("Enter a height in centimeters > ");
        fgets(input, BUFF_LEN, stdin);
        cm = atof(input);
        totalInches = cm*CM_TO_IN;
        feet = (int)totalInches/IN_PER_FT;
        inches = totalInches - (double)feet*IN_PER_FT;
    }

    printf("Goodbye!\n");

    return 0;
}