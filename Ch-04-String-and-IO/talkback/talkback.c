/* Demonstration of basic string concepts. */
#include <stdio.h>
#include <string.h>     // for strlen() prototype
#include <stdlib.h>
#define DENSITY 62.4   //human density in lbs/ft^3
#define BUFF_LEN 64

void strip(char *str) {
    int i = 0, j = 0;
    char tmp[BUFF_LEN];

    while(str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            tmp[j] = str[i];
            j += 1;
        }
        i += 1;
    }

    // copy the result back to input
    strcpy(str, tmp);
}

int main(void) {
    float weight, volume;
    int size, letters;
    char input[BUFF_LEN];
    char name[BUFF_LEN];

    printf("Hi! What's your first name?\n");
    fgets(input, BUFF_LEN, stdin);
    // Strip whitespace
    strip(input);
    strcpy(name, input);
    
    printf("%s, what's your weight in pounds?\n", name);
    fgets(input, BUFF_LEN, stdin);
    weight = atof(input);
    size = sizeof name;
    letters = strlen(name);
    volume = weight/DENSITY;

    printf("Well, %s, your volume is %2.2f cubic feet.\n",
        name, volume);
    printf("Also, your first name has %d letters,\n", letters);
    printf("and we have %d bytes to store it in\n", size);

    return 0;
}