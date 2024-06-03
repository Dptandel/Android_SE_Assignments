// 2. Write a C++ Program to find Area of Rectangle using inheritance.

#include<iostream>
using namespace std;

class Rectangle {
    public:
        int length, width;
    
    public:
        int getLength() {
            cout << "Enter rectangle length: ";
            cin >> length;
        }

        int getWidth() {
            cout << "Enter rectangle width: ";
            cin >> width;
        }
};

class AreaOfRectangle : public Rectangle {
    public:
        int area;
    public:
        int calculateArea() {
            Rectangle :: getLength();
            Rectangle :: getWidth();

            area = length * width;
            cout << "\nArea of Rectangle : " << area << endl;
        }
};

int main()
{
    AreaOfRectangle area_rectangle;

    area_rectangle.calculateArea();
    return 0;
}