/* Prints all integers from given n to n + 10, inclusive */
#include <stdio.h>
#include <stdlib.h>

#define BUFF_LEN 64

int main(void) {
    char input[BUFF_LEN];
    int num = 0, upperBound = 0;

    printf("Please enter a number > ");
    fgets(input, BUFF_LEN, stdin);
    num = atoi(input);
    upperBound = num+10;

    while (num <= upperBound) {
        printf("%-3d", num++);
    }

    return 0;
}