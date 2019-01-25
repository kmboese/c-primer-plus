/* Chapter 3 Exercises */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define BUFF_LEN 64

/* Shows overflow and underflow behavior for various numeric types. */
void ex01(void) {
    float underflow = 1.0f;
    float bigBoi = 3.402823e38;

    printf("Exercise 1:\n");
    printf("Float overflow:\n");
    printf("The number is originally %f\n", underflow);
    printf("Dividing %f by %f should yield 3.2864e-39\n", underflow, bigBoi);
    printf("But due to underflow, the result in C is %f.\n", \
        underflow/bigBoi);
    printf("\nAfter dividing %f by %f 1000 times, the last 10 results are ", \
        underflow, 100.0f);

    // Float: Underflow loop
    for (int i = 0; i < 1000; i++) {
        if (i > 990) {
            printf("%f, ", underflow/(100.0*i) );
        }
    }
    printf("\n\n");

    // Double: Overflow
    double big1 = 3.11e200;
    double big2 = 7.45674e200;
    printf("Double overflow: the original numbers are %.3e \
and %.3e\n",\
        big1, big2);
    printf("%.3e * %.3e yields %.3e\n", big1, big2, big1*big2);
    printf("\n");

    // Integer overflow and underflow
    printf("Integer underflow and overflow:\n");
    int maxSignedInt = 2147483647;
    int minSignedInt = -2147483648;
    printf("Adding one to %d yields %d, an example of integer overflow.\n", \
        maxSignedInt, maxSignedInt+1);
    printf("Subtracting one from %d yields %d, an example of integer underflow.\n",\
        minSignedInt, minSignedInt-1);
    
}

/* Prints the associated ASCII value given an ASCII character */
void ex02(void) {
    char line[BUFF_LEN] = "";
    char userInput = '\0';

    printf("Enter an ASCII character > ");
    fgets(line, BUFF_LEN, stdin);
    userInput = line[0];

    printf("Character '%c' has value %d\n", userInput, userInput);
}

/* Sounds an alert and then prints a message */
void ex03(void) {
    printf("\a"); // Doesn't make a sound on Windows 7 ¯\_(ツ)_/¯
    printf("Startled by the sudden sound, Sally shouted, \"By the Great \
Pumpkin, what was that!?\"\n");
}

int main(void) {
    char userSelection[BUFF_LEN];

    while (1) {
        printf("Enter exercise number:\n");
        printf("1 - Number overflow and underflow\n");
        printf("2 - ASCII to ASCII code conversion\n");
        printf("3 - Alarm and a message\n");
        printf("> ");
        fgets(userSelection, BUFF_LEN, stdin);

        // Switch on selection
        if (userSelection[0] == '1'){
            ex01();
        }
        else if (userSelection[0] == '2') {
            ex02();
        }
        else if (userSelection[0] == '3') {
            ex03();
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