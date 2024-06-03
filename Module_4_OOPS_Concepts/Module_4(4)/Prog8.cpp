// 8. Write a program to Mathematic operation like 
// Addition, Subtraction, Multiplication, Division Of two number using different parameters and Function Overloading

#include <iostream>
using namespace std;

class MathOperations {
public:
    // Addition
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded addition function
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Subtraction
    int subtract(int a, int b) {
        return a - b;
    }

    // Multiplication
    int multiply(int a, int b) {
        return a * b;
    }

    // Overloaded multiplication function
    int multiply(int a, int b, int c) {
        return a * b * c;
    }

    // Division
    float divide(float a, float b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Cannot divide by zero" << endl;
            return 0;
        }
    }
};

int main() {
    MathOperations math_ops;

    // Addition
    cout << "Addition of two numbers: " << math_ops.add(15, 13) << endl;
    cout << "Addition of three numbers: " << math_ops.add(51, 30, 21) << endl;

    // Subtraction
    cout << "Subtraction  of two numbers: " << math_ops.subtract(55, 32) << endl;

    // Multiplication
    cout << "Multiplication of two numbers: " << math_ops.multiply(15, 3) << endl;
    cout << "Multiplication of three numbers: " << math_ops.multiply(25, 3, 10) << endl;

    // Division
    cout << "Division  of two numbers: " << math_ops.divide(64, 4) << endl;
    cout << "Division by zero: " << math_ops.divide(16, 0) << endl;

    return 0;
}
