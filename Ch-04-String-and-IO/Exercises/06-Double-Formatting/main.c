/* Program that uses formatting to print various double values. */
#include <stdio.h>
#include <float.h>

int main(void) {
    double d = 1.0/3.0;
    float f = 1.0f/3.0;

    // Display numbers
    printf("Displaying the calculation (1.0/3.0) as \"double, float\"\n");
    printf("1 - %.4f, %.4lf\n", d, f);
    printf("2 - %.12f, %.12lf\n", d, f);
    printf("3 - %.16f, %.16lf\n", d, f);

    printf("FLT_DIG == %d, DBL_DIG == %d\n", FLT_DIG, DBL_DIG);


    return 0;
}