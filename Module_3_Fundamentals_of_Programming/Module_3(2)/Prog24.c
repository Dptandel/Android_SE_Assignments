// Accept the input month number and print number of days in that month.

#include <stdio.h> 

int main () {
    int N;

    printf("Enter the month number N : ");
    scanf("%d", &N);

    if (N == 1 || N == 3 || N == 5 || N == 7 || N == 8 || N == 10 || N == 12) { 
        printf("31 Days."); 
    } else if (N == 4 || N == 6 || N == 9 || N == 11) { 
        printf("30 Days."); 
    } else if (N == 2) { 
        printf("if leap year then 29 otherwise 28 Days."); 
    } else { 
        printf("Invalid Month."); 
    } 
}