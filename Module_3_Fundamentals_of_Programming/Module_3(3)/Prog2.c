// WAP to accept 5 numbers from user and display all numbers

#include <stdio.h>

int main() {

    int num1, num2, num3, num4, num5;

    printf("Enter 5 numbers : ");

    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    printf("The entered 5 numbers are : %d, %d, %d, %d, %d.", num1, num2, num3, num4, num5);
    
    return 0;
}