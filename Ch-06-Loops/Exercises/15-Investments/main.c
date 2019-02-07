/*
 * Calculates simple interest and compound interest and compares them after
 * a period of time
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFF_LEN 255    // Max length of a char array

int main(void) {
    double daphnePrinciple = 100.0;         // Daphne's initial investment
    double daphneInterest = 0.10;           // Daphne's simple interest rate
    double daphneTotal = daphnePrinciple;   // Daphne's total 
    double deirdrePrinciple = 100.0;        // Deirdre's initial investment
    double deirdreInterest = 0.05;          // Deirdre's compound interest rate
    double deirdreTotal = deirdrePrinciple; // Deirdre's total
    int years = 0;                          // years of interest calcs

    // Calculate how many years it takes for Deirde's investments to exceed
    // Daphne's investments
    while (deirdreTotal <= daphneTotal) {
        // Daphne gets simple interest: 10% on principle only
        daphneTotal += (daphnePrinciple*daphneInterest);
        // Deirdre gets compound interest: 5% yearly on total investments
        deirdreTotal *= (1.0 + deirdreInterest);
        years++;
    } 
    
    printf("With an initial investment of $%.2lf, with a rate of %.2lf%% for "
    "Daphne and %.2lf%% for Deirdre,\nit took %d years for Deirdre's "
    "investment to surpass Daphne's investment.\n", \
        daphnePrinciple, daphneInterest*100, deirdreInterest*100, years);
    printf("Final totals: Daphne = $%.2lf, Deirdre = $%.2lf\n", \
        daphneTotal, deirdreTotal);

    return 0;
}