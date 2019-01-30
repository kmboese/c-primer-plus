/* Prints the following using nested loops:
$
$$
$$$
$$$$
$$$$$
*/
#include <stdio.h>


int main(void) {
    char output = '$';
    unsigned short numLines = 5;

    // Print 5 lines
    for (int i = 0; i < numLines; i++) {
        // On each line, print (i+1) dollar signs
        for (int j = i+1; j > 0; j--) {
            printf("%c", output);
        }
        printf("\n");
    }

    return 0;
}