// 11. Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
//     Rectangle: Width * Height
//     Triangle: ½ * Base * Height
//     Circle: Pi * Radius * Radius

#include <iostream>

using namespace std;

class AreaCalculator {
public:
    // Function Area of a rectangle
    float calculateArea(float length, float width) {
        return length * width;
    }

    // Function Area of a triangle
    float calculateArea(float base, float height, char) { // Third parameter to distinguish from rectangle
        return 0.5 * base * height;
    }

    // Function Area of a circle
    float calculateArea(float radius) {
        const float pi = 3.14159;
        return pi * radius * radius;
    }
};

int main() {
    AreaCalculator area_calculator;

    // Rectangle
    cout << "<---- For Area of Rectangle ---->" << endl;
    float length, width;
    cout << "Enter Length of Rectangle: ";
    cin >> length;
    cout << "Enter Width of Rectangle: ";
    cin >> width;
    cout << "Area of Rectangle: " << area_calculator.calculateArea(length, width) << endl;

    // Triangle
    cout << "\n<---- For Area of Triangle ---->" << endl;
    float base, height;
    cout << "Enter Base of Triangle: ";
    cin >> base;
    cout << "Enter Height of Triangle: ";
    cin >> height;
    cout << "Area of Triangle: " << area_calculator.calculateArea(base, height, 't') << endl;

    // Circle
    cout << "\n<---- For Area of Circle ---->" << endl;
    float radius;
    cout << "Enter Radius of Circle: ";
    cin >> radius;
    cout << "Area of Circle: " << area_calculator.calculateArea(radius) << endl;

    return 0;
}
