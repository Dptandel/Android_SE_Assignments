// Calculate the Sum of Natural Numbers Using the While Loop.

#include <stdio.h>

int main () {
    int i, num, sum = 0;

    printf("Enter how many natural number sum you want : ");
    scanf("%d", &num);

    i = 1;
    
    while (i <= num) {
        sum += i;
        ++i;
    }
    
    printf("The sum of %d natural numbers is : %d", num, sum);


    return 0;
}