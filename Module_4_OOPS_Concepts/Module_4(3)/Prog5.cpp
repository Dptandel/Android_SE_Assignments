// 5. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. 
// Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

// an equilateral triangle: all the sides of a triangle are of equal length.
// an isosceles triangle: two sides of a triangle are of the same measure. 
// a scalene triangle: all the sides of a triangle are of different length. 

#include<iostream>
using namespace std;

class Triangle {
    private:
        int side_a, side_b, side_c;
    
    public:
        void get_sides(){
            cout << "Enter Triangle Side 'a' : ";
            cin >> side_a;
            cout << "Enter Triangle Side 'b' : ";
            cin >> side_b;
            cout << "Enter Triangle Side 'c' : ";
            cin >> side_c;
        }

        void set_sides(int a, int b, int c){
            side_a = a;
            side_b = b;
            side_c = c;
        }

        void check_triangle_type(){
            if(side_a == side_b && side_b == side_c){
                cout << "Triangle is Equilateral...!" << endl;
            } else if(side_a == side_b || side_b == side_c || side_a == side_c){
                cout << "Triangle is Isosceles...!" << endl;
            } else {
                cout << "Triangle is Scalene...!" << endl;
            }
        }
};

int main() {
    Triangle t;
    
    t.get_sides();
    t.check_triangle_type();
    
    return 0;
}
