/* Takes a Fahrenheight input and converts to Celsius and Kelvin. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_LEN 64

void temperatures(double fahr);

int main(void) {
    char input[BUFF_LEN];
    double fahrenheit = 0.0;

    printf("Please enter a temperature in Fahrenheit > "); 
    fgets(input, BUFF_LEN, stdin);
    fahrenheit = atof(input);

    while (strstr(input, "0") != NULL || fahrenheit != 0) {
        temperatures(fahrenheit);
        printf("Please enter a temperature in Fahrenheit (enter "
            "a non-digit to stop) > "); 
        fgets(input, BUFF_LEN, stdin);
        fahrenheit = atof(input);
    }

    return 0;
}

void temperatures(double fahr) {
    const double FAHR_MULT = 1.8;
    const double FAHR_SUM = 32.0;
    const double KELVIN_SUM = 273.16;
    double celsius, kelvin;

    celsius = (fahr-FAHR_SUM)/FAHR_MULT;
    kelvin = celsius+KELVIN_SUM;

    printf("%.3lf Fahrenheit = %.3lf Celsius = %.3lf Kelvin\n", \
        fahr, celsius, kelvin);
}