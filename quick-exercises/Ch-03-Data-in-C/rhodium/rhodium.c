#include <stdio.h>

const float POUNDS_TO_TROY_OUNCES = 14.5833f;

int main(void) {
    float bodyWeight = 0.0f;
    float rhodiumDollarsPerTroyOunce = 163.886088f / POUNDS_TO_TROY_OUNCES;


    printf("Please enter your weight in lbs > ");
    // %f tells scanf() to read the value as a float. Scanf() always takes a
    // variable reference as an argument to read the input stream into.
    scanf("%f", &bodyWeight);
    printf("The value of your body weight in rhodium is $%.2f\n",
    bodyWeight*POUNDS_TO_TROY_OUNCES*rhodiumDollarsPerTroyOunce);
    printf("If you find yourself losing weight, simply eat more to maintain 
    your value!\n");
    return 0;
}