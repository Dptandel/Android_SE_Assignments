// calculate the Factorial of a Given Number using while loop.

#include <stdio.h>

int main () {
    int num, i, factorial;

    factorial = i = 1;

    printf("Enter a Number to Find Factorial: ");    
    scanf("%d",&num);

    while (i <= num) {
        factorial = factorial * i;
        i++;
    }

    printf("The Factorial of %d is : %d", num, factorial);  

    return 0;
}