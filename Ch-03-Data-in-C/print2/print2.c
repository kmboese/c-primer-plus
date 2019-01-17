/* More formatting tests with different number types. */
#include <stdio.h>

int main(void) {
    unsigned int un = 3000000000; /* system with 32-bit int */
    short end = 200;
    long big = 655237;
    long long verybig= 12345678908642;

    _Bool isOn = 0;

    printf("un = %u and not %d\t\t (sizeof un == %lu bytes)\n", \
        un, un, sizeof(un));
    printf("end = %hd and %d\t\t\t\t (sizeof end == %lu bytes)\n", \
        end, end, sizeof(end)); // h is the format specifier for short ints
    printf("big = %ld and not %hd\t\t\t (sizeof big == %lu bytes)\n", \
        big, big, sizeof(big));
    printf("verybig = %lld and %ld\t (sizeof verybig == %lu bytes)\n", \
    verybig, verybig, sizeof(verybig));

    if (isOn) {
        printf("The value of isOn is %d\t (sizeof isOn == %lu)\n",\
        isOn, sizeof(isOn));
    }
    else {
        printf("isOn is false.\n");
    }

    return 0;
}