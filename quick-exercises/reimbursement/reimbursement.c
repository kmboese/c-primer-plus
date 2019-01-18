/* Program that calculates mileage reimbursement based on a beginning
and ending odometer reading. */
#include <stdio.h>

#define RATE 0.35

int main(void) {
    double beginOdo;
    double endOdo;
    double mileage;

    printf("Enter beginning odometer reading=> ");
    scanf("%lf", &beginOdo);
    printf("Enter ending odomteter reading=> ");
    scanf("%lf", &endOdo);

    // Simple error handling: if endOdo < beginOdo, error out 
    if (endOdo < beginOdo) {
        printf("Error: ending odometer cannot be less than beginning\
 odometer\n");
        return 1;
    }

    mileage = endOdo - beginOdo;
    printf("You traveled %.1lf miles. At $.35 per mile,\n", 
        mileage);
    printf("Your reimbursement is $%.2lf.\n", RATE*mileage);

    return 0;
}