// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)

#include <stdio.h>

int add(int a, int b, char op, int result) {
    result = a + b;
    printf("Addition: %d %c %d = %d \n", a, op, b, result);
    return 0;
}

int sub(int a, int b, char op, int result) {
    result = a - b;
    printf("Subtraction: %d %c %d = %d \n", a, op, b, result);
    return 0;
}

int mul(int a, int b, char op, int result) {
    result = a * b;
    printf("Multiplication: %d %c %d = %d \n", a, op, b, result);
    return 0;
}

int div(int a, int b, char op, int result) {
    result = a / b;
    printf("Division: %d %c %d = %d \n", a, op, b, result);
    return 0;
}

int main() {
    char op;
    
    int num1, num2, result;
    
    printf("Simple calculator\n");

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("For Addition (+)\n");
    printf("For Subtraction (-)\n");
    printf("For Multiplication (*)\n");
    printf("For Division (/)\n");

    printf("Enter your choice from above: ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            add(num1, num2, op, result);
            break;
        case '-':
            sub(num1, num2, op, result);
            break;
        case '*':
            mul(num1, num2, op, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Division by zero is not allowed.\n");
            } else {
                div(num1, num2, op, result);
            }
            break;
        default:
            printf("Invalid operation selected.\n");
    }

    return 0;
}
