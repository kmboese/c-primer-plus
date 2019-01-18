/* Displays floating point numbers in two ways */
#include <stdio.h>

int main(void) {
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.23e-5; // 0.0000523
    float bigboi = 3.4e38 * 100.0f;

    printf("%f can be written %e\n", aboat, aboat);
    printf("%f can be written %e\n", abet, abet);
    // Different format specifier for long doubles
    printf("%Lf can be written %Le\n", dip, dip); 
    // Example of "infinity" overflow
    printf("%f is too big, so it is printed as infinity\n",
        bigboi);

    if (bigboi > 3.4e38) {
        printf("inf > 3.4e38\n");
    }

    return 0;
}