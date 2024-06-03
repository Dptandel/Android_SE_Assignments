// 4. Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
// Implement member functions to calculate the rectangle's area and perimeter.

#include<iostream>
using namespace std;

class Rectangle {
    private:
        float length, width, area, perimeter;
    
    public:
        void get_variables() {
            cout << "Enter the length of Rectangle: ";
            cin >> length;

            cout << "Enter the width of Rectangle: ";
            cin >> width;
        }

        void calculate_area() {
            area = length * width;
            cout << "Area of Rectangle: " << area << endl;
        }

        void calculate_perimeter() {
            perimeter = 2 * (length + width);
            cout << "Perimeter of Rectangle: " << perimeter << endl;
        }
};

int main(){
    Rectangle rectangle;

    rectangle.get_variables();
    rectangle.calculate_area();
    rectangle.calculate_perimeter();

    return 0;
}