// 2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>
using namespace std;

class Calculator {
private:
    float num1, num2;

public:
    Calculator(float a, float b) {
        num1 = a;
        num2 = b;
    }

    float add() {
        return num1 + num2;
    }

    float subtract() {
        return num1 - num2;
    }

    float divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error! Division by zero is not allowed." << endl;
            return 0;
        }
    }

    float multiply() {
        return num1 * num2;
    }
};

int main() {
    float num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    Calculator calc(num1, num2);

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Division: " << calc.divide() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;

    return 0;
}
