/*
 * Reads in a pair of floats and performs operations on them
 * until non-numeric input is given.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFF_LEN 64     // Max length of a char array
#define NON_NUMERIC -1
#define FLOAT_ZERO -2

/* 
 * Get two floating point numbers from the user.
 * Input: two string pointers
 * Output: void 
*/
void getFloats(char *str1, char *str2);
/* 
 * Parse two floating point strings
 * Input: two strings and two floats into which the float values will be read
 * Output: 
 *  0 if no errors
 *  NON_NUMERIC if either string is non-numeric
 *  FLOAT_ZERO if either string is the number zero
*/
int parseInput(char *str1, char *str2, float *val1, float *val2);
/* 
 * Input: two non-zero float values.
 * Output: the difference of the two floats divided by their product 
*/
float calcResult(float val1, float val2);
// Strips newlines from given string
void strip(char *str);

int main(void) {
    char str1[BUFF_LEN], str2[BUFF_LEN];
    float val1 = 0.0f, val2 = 0.0f, result = 0.0f;
    int errorCode = 0;    

    while ( errorCode != NON_NUMERIC ) {
        getFloats(str1, str2);
        errorCode = parseInput(str1, str2, &val1, &val2);

        if (errorCode == FLOAT_ZERO) {
            printf("Error: neither value can be zero. Try again.\n");
            continue;
        }

        if (errorCode == NON_NUMERIC) {
            break;
        }

        result = calcResult(val1, val2);
        printf("(%.3f-%.3f)/(%.3f*%.3f) = %.3f\n",\
            val1, val2, val1, val2, result);
    } 

    printf("Goodbye!\n");
    return 0;
}

void getFloats(char *str1, char *str2) {
    printf("Enter the first non-zero floating point number > ");
    fgets(str1, BUFF_LEN, stdin);
    strip(str1);
    printf("Enter the second non-zero floating point number > ");
    fgets(str2, BUFF_LEN, stdin);
    strip(str2);
}

int parseInput(char *str1, char *str2, float *val1, float *val2) {
    // Keeps track of whether the input was zero for either string
    int zeroFound1 = 0, zeroFound2 = 0; 
    if ( (strcmp(str1, "0") == 0) || ( strcmp(str1, "0.0") == 0)) {
        return FLOAT_ZERO;
    }
    else if ( (strcmp(str2, "0") == 0) || (strcmp(str2, "0.0") == 0) ) {
        return FLOAT_ZERO;
    }
    else {
        *val1 = atof(str1);
        *val2 = atof(str2);
    }

    if ((*val1 == 0.0f && !zeroFound1) || (*val2 == 0.0f && !zeroFound2) ) {
        return NON_NUMERIC;
    }

    else {
        return 0;
    }
}

void strip(char *str) {
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] == '\n' || str[i] == '\t') {
            str[i] = '\0';
            return;
        }
    }
}

float calcResult(float val1, float val2) {
    return(val1-val2)/(val1*val2);
}