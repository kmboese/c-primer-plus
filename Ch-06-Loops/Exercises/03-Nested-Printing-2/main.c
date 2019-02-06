/* Prints the following using nested loops:
F
FE
FED
FEDC
FEDCB
FEDCBA
*/
#include <stdio.h>


int main(void) {
    char startChar = 'F';
    unsigned short numLines = 6;

    // Print lines
    for (int i = 0; i < numLines; i++) {
        // On each line, print the starting char moved backwards by the 
        // inner index
        for (int j = 0; j <=i; j++) {
            printf("%c", startChar-j);
        }
        // Skip the newline on the very last output
        if (i != (numLines-1)) {
            printf("\n");
        }
    }

    return 0;
}