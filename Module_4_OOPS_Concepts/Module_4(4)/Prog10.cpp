// 10. Write a program to concatenate the two strings using Operator Overloading.

#include <iostream>
#include <cstring>
using namespace std;

class Concatenation {
private:
    static const int MAX_SIZE = 100;
    char str[MAX_SIZE];
public:
    Concatenation(const char *s = "") {
        strcpy(str, s);
    }

    // Overloading '+' operator for string concatenation
    Concatenation operator+(const Concatenation& other) const {
        Concatenation result;
        strcpy(result.str, str);
        strcat(result.str, other.str);
        return result;
    }

    void display() const {
        cout << str;
    }
};

int main() {
    Concatenation str1("Hello, ");
    Concatenation str2("Welcome to the world of TOPS Technologies..!");

    // Concatenate strings using operator overloading
    Concatenation result = str1 + str2;

    result.display();
    cout << endl;

    return 0;
}