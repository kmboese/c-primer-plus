/* Prints a pyramid using nested loops as follows:
    A
   ABA
  ABCBA
 ABCDCDA
ABCDEDCBA

after the user enters the 'E' character.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFF_LEN 64     // Max length of a char array
#define HEIGHT 5        // height of the pyramnid
#define WIDTH 9         // width of the pyramid base

// Returns 1 if given char is an alpha character, 0 otherwise.
int isAlpha(char ch);  

int main(void) {
    char inputChar = '\0', startChar = '\0';
    char input[BUFF_LEN];
    int indices[WIDTH];
    int middleIndex = WIDTH/2;

    //Get user input:
    while (!(isAlpha(inputChar))) {
        printf("Enter a character to create a pyramid > ");
        inputChar = getchar();
        if (!isAlpha(inputChar)) {
            printf("Error: %c is not an alpha character. Try again.\n",\
                inputChar);
        }
    }

    // Initialize starting char
    startChar = inputChar-HEIGHT;
    
    // Initially, only middle index is set
    for (int i = 0; i < WIDTH; i++) {
        indices[i] = 0;
    }
    indices[WIDTH/2] = 1;

    // Print lines
    for (int i = 0; i < HEIGHT; i++) {
        // Starting character is based on the height of the pyramid
        startChar = inputChar-(HEIGHT-i-1);

        // Set indices to be printed in an outwards pattern
        indices[middleIndex+i] = 1;
        indices[middleIndex-i] = 1;
        
        /* On each line, print the starting char moved backwards by the 
        inner index */
        for (int j = 0; j < WIDTH; j++) {
            if (indices[j] == 1) {
                printf("%c", (startChar-abs(middleIndex-j)));
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

int isAlpha(char ch) {
    return( (ch >= 'a' && ch <='z') || \
        (ch >= 'A' && ch <= 'Z') );
}