// WAP to make simple calculator using conditional statement
// (operation include Addition, Subtraction, Multiplication, Division, Modulo)

#include <stdio.h>

int main () {
    int firstNumber, secondNumber, addition, subtraction, multiplication, division, modulo;
    char operation;

    printf("Enter the first number : ");
    scanf("%d",&firstNumber);

    printf("Enter the second number : ");
    scanf("%d",&secondNumber);

    printf("Enter the operation (addition '+', subtraction '-', multiplication '*', division '/', modulo '%%') : ");
    scanf(" %c",&operation);
    
    if (operation == '+') {
        addition = firstNumber + secondNumber;
        printf("The addition of %d and %d = %d", firstNumber, secondNumber, addition);
    } else if (operation == '-') {
        subtraction = firstNumber - secondNumber;
        printf("The subtraction of %d and %d = %d", firstNumber, secondNumber, subtraction);
    } else if (operation == '*') {
        multiplication = firstNumber * secondNumber;
        printf("The multiplication of %d and %d = %d", firstNumber, secondNumber, multiplication);
    } else if (operation == '/') {
        division = firstNumber / secondNumber;
        printf("The addition of %d and %d = %d", firstNumber, secondNumber, division);
    } else if (operation == '%') {
        modulo = firstNumber % secondNumber;
        printf("The modulo of %d and %d = %d", firstNumber, secondNumber, modulo);
    } else {
        printf("Invalid Input...Enter again..");
    }
    return 0;
}