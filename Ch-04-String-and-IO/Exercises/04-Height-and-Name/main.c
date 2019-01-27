/* Program that reads in height in inches and name and outputs height in
fractional feet. */
#include <stdio.h>
#include <stdlib.h>

#define BUFF_LEN 64
#define INCHES_PER_FT 12

int main(void) {
    char input[BUFF_LEN];
    char name[BUFF_LEN];
    float height = 0.0f;

    // Get user name
    printf("Please enter your name > ");
    scanf("%s", name);
    getchar(); // consume newline character

    // Get user height
    printf("Please enter your height in inches > ");
    fgets(input, BUFF_LEN, stdin);
    height = atof(input); 

    if (height < 0.0f) {
        printf("Error: you can't have a negative height! Exiting :o\n");
        return 1;
    }

    // Calculate fractional height
    printf("%s, you are %.2f feet tall\n", name, height/INCHES_PER_FT);

    return 0;
}