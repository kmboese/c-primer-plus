/* Stores the alphabet in an array and prints it. */
#include <stdio.h>

#define ALPHABET_SIZE 26

int main(void) {
    char lowercaseAlpha[ALPHABET_SIZE];

    // Store the contents of the lowercase alphabet in the array
    for (int i = 0; i <ALPHABET_SIZE; i++) {
        lowercaseAlpha[i] = 'a'+i;
    }

    // Print the contents
    printf("Alphabet:\n");
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (i != 0 && i % 10 == 0) {
            printf("\n");
        }
        printf("%c ", lowercaseAlpha[i]);
    }

    return 0;
}