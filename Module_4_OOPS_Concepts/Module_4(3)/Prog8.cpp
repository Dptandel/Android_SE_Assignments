// 8. Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. 
// Include member functions to calculate the grade based on the marks and display the student's information. 
// Accept address from each student implement using of aggregation

#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string street, city, state;
    int zipCode;

public:
    void getAddress(){
        cout << "\n<----- Provide Address Details ----->" << endl;
        cout << "Street: ";
        cin.ignore();
        getline(cin, street);
        cout << "City: ";
        getline(cin, city);
        cout << "State: ";
        getline(cin, state);
        cout << "Zip Code: ";
        cin >> zipCode;
    }

    void displayAddress()  {
        cout << "Address: " << street << ", " << city << ", " << state << ", " << zipCode << endl;
    }
};

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    int marks;
    char grade;
    Address address; // Aggregation: Student has an Address object

public:
    void getStudentDetails(){
        cout << "<----- Student Details ----->" << endl;
        cout << "Name: ";
        getline(cin, name);
        cout << "Class: ";
        getline(cin, studentClass);
        cout << "Roll No.: ";
        cin >> rollNumber;
        cout << "Total Marks (Out of 100): ";
        cin >> marks;
        address.getAddress(); // Get address details
    }

    void calculateGrade() {
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 80)
            grade = 'B';
        else if (marks >= 70)
            grade = 'C';
        else if (marks >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    void displayStudentInfo()  {
        cout << "Name: " << name << endl;
        cout << "Class: " << studentClass << endl;
        cout << "Roll No.: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
        address.displayAddress(); // Display address
        cout << endl;
    }
};

int main() {
    Student student;

    student.getStudentDetails();
    student.calculateGrade();

    // Display student information
    cout << "\nStudent Information:\n";
    student.displayStudentInfo();

    return 0;
}
