/* Program that reads in a name and prints it using various formatting
options. */
#include <stdio.h>
#include <string.h>

#define BUFF_LEN 64     // length for character buffers

int main(void) {
    char firstName[BUFF_LEN];

    printf("Please enter a first name > ");
    scanf("%s", firstName);

    // 1 - Print name in double quotation marks
    printf("\"%s\"\n", firstName);

    // 2 - Print in field 20 chars wide, with whole field in quotes
    printf("\"%20s\"\n", firstName);

    // 3 - Print name at left end of a field 20 chars wide, with whole
    // field in quotes (left-justified)
    printf("\"%-20s\"\n", firstName);

    // 4 - Print name in a field three chars wider than the name
    // * lets you specify a variable width, by preceding the string pointer
    // with an int value.
    printf("\"%*s\"\n", ((int)strlen(firstName)+3), firstName);


    return 0;
}