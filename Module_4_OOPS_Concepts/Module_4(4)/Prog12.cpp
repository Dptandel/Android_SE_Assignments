// 12. Write a program to swap the two numbers using friend function without using third variable

#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int a, b;
public:
    SwapNumbers(int x, int y) {
        a = x;
        b = y;
    }

    // Friend function to swap numbers without using a third variable
    friend void swap(SwapNumbers&);

    void display() {
        cout << "After swapping: a = " << a << ", b = " << b << endl;
    }
};

// Friend function definition
void swap(SwapNumbers& obj) {
    obj.a = obj.a + obj.b;
    obj.b = obj.a - obj.b;
    obj.a = obj.a - obj.b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    SwapNumbers numbers(x, y);
    
    cout << "Before swapping: a = " << x << ", b = " << y << endl;
    
    swap(numbers);
    
    numbers.display();

    return 0;
}
