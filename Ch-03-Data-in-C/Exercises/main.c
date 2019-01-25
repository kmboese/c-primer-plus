/* Chapter 3 Exercises */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define BUFF_LEN 64

void ex01(void) {
    float underflow = 1.0f;
    float bigBoi = 3.402823e38;

    printf("Exercise 1:\n");
    printf("Testing float overflow:\n");
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

    
}

int main(void) {
    char userSelection[BUFF_LEN];

    while (1) {
        printf("Enter exercise number:\n");
        printf("1 - Number overflow and underflow\n");
        printf("> ");
        fgets(userSelection, BUFF_LEN, stdin);

        // Switch on selection
        if (userSelection[0] == '1'){
            ex01();
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