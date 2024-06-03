// 13. Write a program to find the max number from given two numbers using friend function.

#include <iostream>
using namespace std;

class MaxNumberFinder {
private:
    int num1, num2;
public:
    MaxNumberFinder(int x, int y) {
        num1 = x;
        num2 = y;
    }

    // Friend function to find the maximum number
    friend int findMax(const MaxNumberFinder&);
};

// Definition of friend function
int findMax(const MaxNumberFinder& obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    MaxNumberFinder numbers(x, y);
    
    int maxNum = findMax(numbers);
    
    cout << "Maximum number: " << maxNum << endl;

    return 0;
}
