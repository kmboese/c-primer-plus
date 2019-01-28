/* Converts minutes to hours and mintues */
#include <stdio.h>
#include <stdlib.h>

#define MINS_IN_HR 60
#define BUFF_LEN 64
#define THRESHOLD 0.001

int main(void) {
    char input[BUFF_LEN];
    int total_mins;
    int mins;
    int hrs;

    printf("Please enter a number of minutes to be converted to hours and "
    "minutes, or enter 0 to exit > ");
    fgets(input, BUFF_LEN, stdin);
    total_mins = atof(input);

    while (total_mins > 0.0 + THRESHOLD) {
        hrs = total_mins / MINS_IN_HR;
        mins = total_mins % MINS_IN_HR;
        if (mins < 10) {
            printf("%d minutes is %dh0%dm\n", total_mins, hrs, mins);
        }
        else {
            printf("%d minutes is %dh%dm\n", total_mins, hrs, mins);
        }
        

        printf("Please enter a number of minutes to be converted to hours and "
        "minutes, or enter 0 to exit > ");
        fgets(input, BUFF_LEN, stdin);
        total_mins = atof(input);
    }

    return 0;
}