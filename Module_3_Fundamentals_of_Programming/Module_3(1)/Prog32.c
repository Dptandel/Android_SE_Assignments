// Accept 2 numbers and find out its sum check it size

#include<stdio.h>
int main() {
    
    double num1, num2, sum; 

    printf("Enter First Number: ");
    scanf("%lf", &num1);

    printf("Enter Second Number: ");
    scanf("%lf", &num2);

    //Sum of the numbers  
    sum = num1 + num2;

    printf("The sum of two numbers is %lf", sum);  

    printf("\n the size of sum is %d", sizeof(sum));

    return 0; 
}