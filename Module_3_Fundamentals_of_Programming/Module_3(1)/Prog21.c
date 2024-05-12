// Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable

#include<stdio.h>

int main() {
    
    int num1, num2;
    // int temp;  

    printf("Enter First Number: ");
    scanf("%d", &num1);

    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("Before swap number 1 = %d number 2 = %d", num1, num2);   

    /* using 3rd variable */
    // temp = num1;
    // num1 = num2;
    // num2 = temp;

    /* without using 3rd variable */
    num1=num1+num2;    
    num2=num1-num2;   
    num1=num1-num2;

    printf("\n After swap number 1 = %d number 2 = %d", num1, num2);    
    return 0; 
}