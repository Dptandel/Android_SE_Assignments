// 1. Write a program to find the multiplication values and the cubic values using inline function.

#include <iostream>
using namespace std;

inline int multiply(int a, int b) { return a * b; }

inline int cubic(int num) { return num * num * num; }

int main() {
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << endl;
    
    int num3;
    cout << "Enter a number to find its cubic value: ";
    cin >> num3;
    
    cout << "Cubic value of " << num3 << " is: " << cubic(num3) << endl;

    return 0;
}
