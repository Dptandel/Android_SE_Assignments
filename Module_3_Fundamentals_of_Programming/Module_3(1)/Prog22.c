// Calculate compound interest (Compound Interest formula): 
// a. Formula to calculate compound interest annually is given by: Amount= P(1 + R/100)t 
// b. Compound Interest = Amount – P

#include <stdio.h>
#include <math.h>

int main() {
    
    double principle, rate, time, CI, A;

    printf("Enter the principal amount: ");
    scanf("%lf", &principle);

    printf("Enter the annual interest rate (e.g., for 5%%, enter 5): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    A = principle * pow((1 + rate / 100), time);

    printf("The Amount is: %.2lf\n", A);

    CI = A - principle;

    printf("The compound interest is: %.2lf\n", CI);

    return 0;
}