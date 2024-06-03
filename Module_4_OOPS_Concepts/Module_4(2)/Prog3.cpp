// 3. Write a C++ program to implement a class called Circle that has private member variables for radius. 
// Include member functions to calculate the circle's area and circumference.

#include<iostream>
using namespace std;

class Circle {
private:
    float radius, PI = 3.14, area, circumference;

public:
    void get_radius() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void calculate_area() {
        area = PI * radius * radius;
        cout << "Area of circle: " << area << endl;
    }

    void calculate_circumference() {
        circumference = 2 * PI * radius;
        cout << "Circumference of circle: " << circumference << endl;
    }
};

int main(){
    Circle circle;

    circle.get_radius();
    circle.calculate_area();
    circle.calculate_circumference();

    return 0;
}
