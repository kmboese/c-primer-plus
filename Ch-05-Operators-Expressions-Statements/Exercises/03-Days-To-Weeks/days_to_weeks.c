/* Converts days input into weeks and days */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFF_LEN 64
#define DAYS_IN_WEEK 7

void pluralizeAll(int weeks, int days, char *weekStr, char *dayStr);
void pluralizeDays(int days, char *dayStr);

int main(void) {
    char input[BUFF_LEN];
    int totalDays = 0, weeks = 0, remainderDays = 0;
    char dayString[BUFF_LEN], totalDayString[BUFF_LEN], weekString[BUFF_LEN];

    // Get initial input and perform initialization
    printf("Enter a number of days to convert into weeks and days,"
    " or enter 0 to exit > ");
    fgets(input, BUFF_LEN, stdin);
    totalDays = atof(input);
    weeks = totalDays/DAYS_IN_WEEK;
    remainderDays = totalDays%DAYS_IN_WEEK;

    while (totalDays > 0) {
        // Handle pluralization in response
        pluralizeDays(totalDays, totalDayString);
        pluralizeAll(weeks, remainderDays, weekString, dayString);
        printf("%d %s is %d %s, %d %s\n", \
            totalDays, totalDayString, weeks, weekString, remainderDays, dayString);
            
        // Get user input
        printf("Enter a number of days to convert into weeks and days, "
        "or enter 0 to exit > ");
        fgets(input, BUFF_LEN, stdin);

        // Parse and assign results
        totalDays = strtol(input, NULL, 0);
        weeks = totalDays/DAYS_IN_WEEK;
    remainderDays = totalDays%DAYS_IN_WEEK;
    }

    printf("Goodbye!\n");


    return 0;
}

void pluralizeAll(int weeks, int days, char *weekString, char *dayString)
{
    // Handle pluralization
    if (weeks == 1) {
        strcpy(weekString, "week");
    }
    else {
        strcpy(weekString, "weeks");
    }
    if (days == 1) {
        strcpy(dayString, "day");
    }
    else {
        strcpy(dayString, "days");
    }
}

void pluralizeDays(int days, char *totalDayString) {
    if (days == 1) {
        strcpy(totalDayString, "day");
    }
    else {
        strcpy(totalDayString, "days");
    }
}