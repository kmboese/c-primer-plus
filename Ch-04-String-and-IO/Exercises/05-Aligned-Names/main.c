/* Program that prints names and info aligned with the names. */
#include <stdio.h>
#include <string.h>

#define BUFF_LEN 64

int main(void) {
    char firstName[BUFF_LEN];
    char lastName[BUFF_LEN];
    int firstLen = 0, lastLen = 0;

    // Get user input
    printf("Please enter your first name > ");
    scanf("%s", firstName);
    printf("Please enter your last name > ");
    scanf("%s", lastName);

    // Print with special formatting
    firstLen = (int)strlen(firstName);
    lastLen = (int)strlen(lastName);
    printf("%s %s\n", firstName, lastName);
    printf("%*d %*d\n", \
        firstLen, firstLen, lastLen, lastLen);

    printf("%s %s\n", firstName, lastName);
    printf("%-*d %-*d\n", \
        firstLen, firstLen, lastLen, lastLen);
    

    return 0;
}