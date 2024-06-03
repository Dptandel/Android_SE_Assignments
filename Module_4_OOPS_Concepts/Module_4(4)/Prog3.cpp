// 3. Create a class person having members name and age. Derive a class student having member percentage. 
// Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. 
// Write also Main function (Multiple Inheritance)

#include<iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;
    
    public:
        int getData() {
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Age: ";
            cin >> age;
        }
};

class Student : public Person {
    public:
        int marks, percentage;
    public:
        int getPercentage() {
            cout << "\n<---- Enter Student Details ----> " << endl;
            getData();
            cout << "Enter total marks: ";
            cin >> marks;
            percentage = marks / 5;
        }

        int displayStudent() {
            cout << "\n<---- Student Details ---->" << endl;
            cout << "Student Name: " << name << endl;
            cout << "Student Age: " << age << endl;
            cout << "Student Percentage: " << percentage << endl;
        }
};

class Teacher : public Person {
    public:
        int salary;
    
    public:
        int getSalary() {
            cout << "\n<---- Enter Teacher Details ----> " << endl;
            getData();
            cout << "Enter salary of teacher: ";
            cin >> salary;
        }

        int displayTeacher() {
            cout << "\n<---- Teacher Details ---->" << endl;
            cout << "Teacher Name: " << name << endl;
            cout << "Teacher Age: " << age << endl;
            cout << "Teacher Salary: " << salary << endl;
        }
};

int main()
{   
    Student student;
    student.getPercentage();

    Teacher teacher;
    teacher.getSalary();

    student.displayStudent();
    teacher.displayTeacher();

    return 0;
}