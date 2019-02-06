/*
 * Reads in a string and prints the reverse
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFF_LEN 64     // Max length of a char array

void reverse(char *original, char *rev);
// Takes in a string and returns the first word
void getWord(char *str, char *word);
void strip(char *str);

int main(void) {
    char input[BUFF_LEN], word[BUFF_LEN];
    char reverseString[BUFF_LEN];

    while (1) {
        //Get single word from user
        printf("Enter single word, or \"exit\" to exit > ");
        fgets(input, BUFF_LEN, stdin);
        getWord(input, word);
        // Strip the newline
        strip(word);

        if (strcmp(word, "\n") == 0) {
            continue;
        }

        if (strcmp(word, "exit") == 0) {
            break;
        }

        // Reverse the word and print the result
        reverse(word, reverseString);
        printf("Original string: %s\tReversed string: %s\n", word, reverseString);

        // Clear the contents of strings
        memset(reverseString, 0, BUFF_LEN);
        //memset(word, 0, BUFF_LEN);
    }

    printf("Goodbye!\n");
    return 0;
}

void reverse(char *str, char *rev) {
    int index = 0;

    // Copy the string backwards (skip last null character)
    for (int i = strlen(str)-1; i >= 0; i--) {
        rev[index] = str[i];
        index++;
    }
    // add null terminator
    rev[index] = '\0';
}

void getWord(char *str, char *word) {
    if (!str || !word) {
        return;
    }

    int index = 0;

    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ') {
            break;
        }
        else {
            word[index] = str[i];
            index++;
        }
    }

    // add null terminator
    word[index] = '\0';
}

void strip(char *str) {
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == '\n' || str[i] == '\t') {
            str[i] = '\0';
            return;
        }
    }

}