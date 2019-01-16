/* More formatting tests with different number types. */
#include <stdio.h>

int main(void) {
    unsigned int un = 3000000000; /* system with 32-bit int */
    short end = 200;
    long big = 655237;
    long long verybig= 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end); // h is the format specifier for short ints
    printf("big = %ld and not %hd\n", big, big);
    printf("verybig = %lld and %ld\n", verybig, verybig);

    return 0;
}