/* print1.c displays some properties of format specifiers 
with printf() */
#include <stdio.h>

/* Function prototype: in C, functions must be declared
 * before they are defined. 
 * Note: specifying void as a function argument tells the compiler
 * that the function receives zero arguments, and to error if the
 * function is ever called with arguments.
 */
void printfWrongArgs(void);
void bases(void);

int main(void) {
    printfWrongArgs();
    return 0;
}

void printfWrongArgs(void) {
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten-two);
    printf("Doing it wrong: ");
    /* If printf gets fewer arguments than it has format specifiers,
     * the format specifiers will be filled with garbage data from 
     * memory.
    */
    printf("%d minus %d is %d\n", ten);
}