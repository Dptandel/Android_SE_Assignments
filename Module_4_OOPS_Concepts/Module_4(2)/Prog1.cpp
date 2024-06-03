// 1. WAP to create simple calculator using class.

#include<iostream>
using namespace std;

class Calculator {
    public:
        float num1, num2;

    public:
        void get_number(){
            cout << "Enter Number 1: ";
            cin >> num1;
            cout << "Enter Number 2: ";
            cin >> num2;
        }

        void addition(){
            float result = num1 + num2;
            cout << "Addition : "<< num1 << " + " << num2 << " = " << result << endl;
        }

        void subtraction(){
            float result = num1 - num2;
            cout << "Subtraction : "<< num1 << " - " << num2 << " = " << result << endl;
        }

        void multiplication(){
            float result = num1 * num2;
            cout << "Multiplication : "<< num1 << " * " << num2 << " = " << result <<endl;
        }

        void division(){
            if (num2 != 0) {
                float result = num1 / num2;
                cout<< "Division : "<< num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "Cannot divide by zero." << endl;
            }
        }
};

int main() {
    Calculator c;

    c.get_number();
    c.addition();
    c.subtraction();
    c.multiplication();
    c.division();
    
    return 0;
}
