// 5. Assume that the test results of a batch of students are stored in three different classes. 
// Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and 
// class result contains the total marks obtained in the test. 
// The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)

#include<iostream>
using namespace std;

class Students {
public:
    int roll_number;
    string name;

public:
    void get_details() {
        cout << "Enter the roll number of student:  ";
        cin >> roll_number;
        cout << "Enter the name of the student: ";
        cin >> name;
    }

    void display_details() {
        cout << "Roll number of student: " << roll_number << endl;
        cout << "Name of student: " << name << endl;
    }
};

class Test : public Students {
public:
    int marks[2];

public:
    void get_marks() {
        get_details();
        cout << "Enter Maths marks:  ";
        cin >> marks[0];
        cout << "Enter English marks:  ";
        cin >> marks[1];
    }

    void display_marks() {
        display_details();
        cout << "\nTest Marks of the student:" << endl; 
        cout << "Maths   : " << "\t" << marks[0] << endl;
        cout << "English : " << "\t" << marks[1] << endl;
    }
};

class Result : public Test {
public:
    void get_result(){
        get_marks();
    }
    
    void display_result() {
        display_marks();
    }
};

int main()
{
    Result result;

    cout << "\n<---- Enter Details of student ---->" << endl;
    result.get_result();

    cout << "\n<---- Display Details of Student ---->" << endl;
    result.display_result();
    
    return 0;
}
