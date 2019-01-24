/* Chapter 3 Exercises */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define BUFF_LEN 64

int main(void) {
    char userSelection[BUFF_LEN];

    while (1) {
        printf("Enter exercise number:\n");
        printf("1 - Number overflow and underflow\n");
        printf("> ");
        fgets(userSelection, BUFF_LEN, stdin);

        // Switch on selection
        if (userSelection[0] == '1'){
            printf("You selected exercise 1.\n");
        }
        else {
            printf("Error: input not valid.\n");
        }

        printf("Continue? y/n > ");
        fgets(userSelection, BUFF_LEN, stdin);

        if (userSelection[0] == 'n' || userSelection[0] == 'N'){
            break;
        }
        printf("\n");
    }

    printf("Goodbye!\n");

    return 0;
}