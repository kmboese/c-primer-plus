/* Bad version of the second to min/sec conversion program */
#include <stdio.h>
#define SEC_TO_MIN 60

int main(void) {
    int sec, min, left;
    sec = 1;

    printf("This program converts seconds to minutes and "
    "seconds.\nJust enter the number of seconds.\n");
    printf("Enter 0 to end the program.\n");
    
    // Main loop: issue is that a time calculation is printed before exit
    // when "0" is entered, whereas with two scanf statements, the value
    // can be checked before the loop is entered (loop-and-a-half problem)
    while (sec > 0) {
        scanf("%d", &sec);
        min = sec/SEC_TO_MIN;
        left = sec % SEC_TO_MIN;
        if (left < 10) {
            printf("%d sec is %d:0%d. \n", sec, min, left);
        }
        else {
            printf("%d sec is %d:%d. \n", sec, min, left);
        }
        printf("Next input?\n");
    }
    printf("Bye!\n");
    return 0;
}