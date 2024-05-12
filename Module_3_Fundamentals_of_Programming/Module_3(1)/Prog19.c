// Calculate compound interest

#include <stdio.h>
#include <math.h>

int main() {
    
    double principle, rate, time, n, CI, A;

    printf("Enter the principal amount: ");
    scanf("%lf", &principle);

    printf("Enter the annual interest rate (e.g., for 5%%, enter 5): ");
    scanf("%lf", &rate);

    rate = rate / 100;

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times that interest is compounded annually: ");
    scanf("%lf", &n);

    A = principle * pow((1 + rate / n), n * time);

    CI = A - principle;

    printf("The compound interest is: %.2lf\n", CI);

    return 0;
}