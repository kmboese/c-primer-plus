/*
 * Reads in a string and prints the reverse
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFF_LEN 64     // Max length of a char array

void reverse(char *original, char *rev);

int main(void) {
    char input[BUFF_LEN];
    char reverseString[BUFF_LEN];

    while (1) {
        //Get single word from user
        printf("Enter single word, or \"exit\" to exit > ");
        scanf("%s", input);

        // Check for exit condition
        if (strcmp(input, "exit") == 0) {
            break;
        }

        // Reverse the word and print the result
        reverse(input, reverseString);
        printf("Original string: %s\tReversed string: %s\n", input, reverseString);
    }
    return 0;
}

void reverse(char *str, char *rev) {
    char tmp[BUFF_LEN];
    int index = 0;

    // Copy the string backwards (skip last null character)
    for (int i = strlen(str)-1; i >= 0; i--) {
        tmp[index] = str[i];
        index++;
    }

    // Copy the temp string to the reverse string
    strcpy(rev, tmp);
}