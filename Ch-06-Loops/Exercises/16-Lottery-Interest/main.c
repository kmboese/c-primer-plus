/*
 * Calculates interest on lottery winnings with withdrawals occurring over time.
 * Winnings: $1,000,000
 * Interest: 8% yearly
 * Withdrawals: $100,000 yearly
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFF_LEN 255    // Max length of a char array
#define DEBUG 1         // Debug flag

int main(void) {
    double principle = 1.0e6;       // Initial lottery winnings
    double interestRate = 0.08;     // Yearly interest rate
    double withdrawals = 1.0e5;     // Yearly withdrawals
    double total = principle;       // Running total 
    int years = 0;                  // Number of years to depletion

    // Calculate how many years it takes for the account to deplete given 
    // the yearly interest earnings and withdrawal
    while (total > 0.0) {
        // Calculate interest earned
        total *= (1 + interestRate);
        // Calculate total after withdrawals
        total -= (withdrawals);
        years++;
        if (DEBUG) {
            printf("Total is $%.2lf after year %d\n", total, years);
        }
    }
    
    printf("It took %d years for the account to deplete, with an initial "
    "investment of $%.1lf,\nyearly interest of %.2lf%%, and withdrawals of "
    "$%.2lf\n", years, principle, interestRate*100, withdrawals);

    return 0;
}