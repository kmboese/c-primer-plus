/*
 * Fills an array with the first n powers of two.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>       // for pow()
#define BUFF_LEN 64     // Max length of a char array
#define TABLE_WIDTH 8

int main(void) {
    char input[BUFF_LEN];
    int *powersOfTwo;
    int listLen = 0;

    printf("Enter a list size > ");
    fgets(input, BUFF_LEN, stdin);
    listLen = atoi(input);
    powersOfTwo = malloc(sizeof(int)*listLen);

    // Fill the array with powers of two
    for (int i = 0; i < listLen; i++) {
        *(powersOfTwo + i) = pow(2,i);
    }

    // Print the contents using do-while
    int count = 0;
    do {
        printf("%d\t", *(powersOfTwo + count));
        if ( (count == (listLen-1)) || \
        ( ((count % TABLE_WIDTH) == 0) && (count != 0)) ) {
            printf("\n");
        }
        count++;
    } while (count < listLen);

    free(powersOfTwo);

    printf("Goodbye!\n");
    return 0;
}