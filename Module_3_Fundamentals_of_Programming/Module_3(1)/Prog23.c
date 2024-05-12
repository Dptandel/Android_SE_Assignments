// WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>

int main() {    
    int num1, num2; 

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("Before swap number 1 = %d number 2 = %d", num1, num2);   
    
    num1=num1*num2;    
    num2=num1/num2;   
    num1=num1/num2;

    printf("\n After swap number 1 = %d number 2 = %d", num1, num2);    
    return 0; 
}