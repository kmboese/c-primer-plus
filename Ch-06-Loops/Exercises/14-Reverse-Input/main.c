/*
 * Reads a line of input from stdin and prints the reversed input.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFF_LEN 255    // Max length of a char array

// Strips newlines from given string
void strip(char *str);

int main(void) {
    char input[BUFF_LEN];

    while (strcmp(input, "exit") != 0) {
        printf("Enter some input > ");
        fgets(input, BUFF_LEN, stdin);
        strip(input);

        // Check for exit condition
        if (strcmp(input, "exit") == 0) {
            break;
        }

        // Print the reverse of the input
        printf("Printing your reversed input:\n");
        for (int i = strlen(input)-1; i >= 0; i--) {
            printf("%c", input[i]);
        }
        printf("\n");
    }

    printf("Goodbye!\n");
    return 0;
}

void strip(char *str) {
    char tmp[BUFF_LEN];
    int count = 0;
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] != '\n' && str[i] != '\t') {
            tmp[count++] = str[i];
        }
    }
    // Copy the stripped string
    strcpy(str, tmp);
    // Clear the temporary string contents
    memset(tmp, 0, BUFF_LEN);
}