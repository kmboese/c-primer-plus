/* Program that reads in first and last name and prints them in 
last,first format. */
#include <stdio.h>
#include <string.h>

#define BUFF_LEN 64     // length for character buffers

int main(void) {
    char firstName[BUFF_LEN];
    char lastName[BUFF_LEN];
    
    // Get user inut
    printf("Please enter your first and last name > ");
    scanf("%s", firstName);
    scanf("%s", lastName);

    // Print the names in the desired order
    printf("Your name in \"first, last\" format is %s, %s\n",\
        lastName, firstName);


    return 0;
}