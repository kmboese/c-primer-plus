/* Code to check answers for Chapter 5 review section */
#include <stdio.h>

int error(void);

int main(void) {
    int x,y;
    // 1a
    x = (2+3)*6;
    printf("1a: x == %d\n", x);
    // 1b
    x = (12+6)/2*3;
    printf("1b: x == %d\n", x);
    // 1c
    y = x = (2+3)/4;
    printf("1c: x == %d, y == %d\n", x, y);
    // 1d
    y = 3+2*(x = 7/2);
    printf("1d: x == %d, y == %d\n", x, y);

    // 2: assume all variables are of type int
    x = (int)3.8 + 3.3;
    printf("\n2a: x == %d\n", x);
    x = (2+3)*10.5;
    printf("2b: x == %d\n", x);
    x = 3/5*22.0;
    printf("2c: x == %d\n", x);
    x = 22.0*3/5;
    printf("2d: x == %d\n", x);

    error();

    return 0;
}

int error(void) {
    int i = 1;
    float n;
    printf("Watch out! Here come a bunch of fractions!\n");
    while (i++ < 30) {
        n = (float)1/i;
        printf(" %f", n);
    }
    printf("\nThat's all, folks!\n");
    return 0;

}