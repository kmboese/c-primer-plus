/*
 * Reverses an n-integer array.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFF_LEN 64     // Max length of a char array

void reverseList(int *list, int length);

// Strips newlines from given string
void strip(char *str);
void test();

int main(void) {
    char input[BUFF_LEN];
    int *list;      // list to hold integers
    int listLen = 0;

    // Get size of array from user
    printf("Please enter the size of the array to create > ");
    fgets(input, BUFF_LEN, stdin);
    listLen = atoi(input);
    list = malloc(sizeof(int)*listLen);

    // Get list contents from user
    for (int i = 0; i < listLen; i++) {
        printf("Enter a number to put into the list > ");
        fgets(input, BUFF_LEN, stdin);
        list[i] = atoi(input);
    }

    // Reverse the list
    reverseList(list, listLen);

    // Print list contents
    printf("List reversed:\n");
    for (int i = 0; i < listLen; i++) {\
        printf("%3d", list[i]);
        if (i == (listLen-1)) {
            printf("\n");
        }
    }

    // Free memory from the list
    free(list);

    printf("Goodbye!\n");
    return 0;
}

void reverseList(int *list, int length) {
    int tmp = 0;
    int end = length-1;
    for (int i = 0; i < (length/2); i++) {
        // swap elements
        tmp = list[i];
        list[i] = list[end];
        list[end] = tmp;
        // move end pointer
        end--;
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

void test() {
    int list1[] = {1,2,3};
    int list2[] = {3,2,1};
    int length = 3;

    reverseList(list2, length);

    for (int i = 0; i < length; i++) {
        if (list1[i] != list2[i]) {
            printf("Error: lists should match but do not\n");
            break;
        } 
    }

    printf("\t#####PASS#####\n");
}