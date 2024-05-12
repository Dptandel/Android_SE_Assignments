/* Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo) */

#include<stdio.h>

int main() {
    int num1, num2, addition, subtraction, multiplication, division, modulo;
    
    printf("Enter Numbers: ");
    scanf("%d %d", &num1, &num2);

    addition = num1+num2;
    subtraction = num1-num2;
    multiplication = num1*num2;
    division = num1/num2;
    modulo = num1%num2;

    printf("Addition of this numbers is %d", addition);
    printf("\n Subtraction of this numbers is %d", subtraction);
    printf("\n Multiplication of this numbers is %d", multiplication);
    printf("\n Division of this numbers is %d", division);
    printf("\n Modulo of this numbers is %d", modulo);
    
    return 0;
}