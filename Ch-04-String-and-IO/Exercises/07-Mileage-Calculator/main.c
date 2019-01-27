/* Program that converts mi/gal to l/100km, using string formatting. */
#include <stdio.h>
#include <stdlib.h>

#define BUFF_LEN 64
#define LITERS_PER_GAL 3.785f
#define KM_PER_MI 1.609f

int main(void) {
    char input[BUFF_LEN];
    float milesTraveled = 0.0f;
    float kmTraveled = 0.0f;
    float galConsumed = 0.0f;
    float litersConsumed = 0.0f;
    double mpg = 0.0;
    double litersPer100KM = 0.0;
    

    printf("Please enter the number of miles traveled > ");
    fgets(input, BUFF_LEN, stdin);
    milesTraveled = atof(input);
    printf("Please enter the number of gallons consumed > ");
    fgets(input, BUFF_LEN, stdin);
    galConsumed = atof(input);

    // Calculate mpg
    mpg = milesTraveled / galConsumed;
    printf("Your car is getting %.1lf mpg.\n", mpg);

    // Calculate liters/100km 
    litersConsumed = galConsumed*LITERS_PER_GAL;
    kmTraveled = milesTraveled*KM_PER_MI;
    float fraction = kmTraveled/100;
    litersPer100KM = litersConsumed/fraction;
    printf("Your car is using %.1f liters of fuel per 100KM.\n", \
        litersPer100KM);

    return 0;
}