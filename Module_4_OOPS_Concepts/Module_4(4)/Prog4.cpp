// 4. Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>
using namespace std;

class Student {
    public:
        string sname;
        int standard, seat_no;

    public:
        int getStudent() {
            cout << " ***** Enter Details for mark sheet ***** " << endl;
            cout << "\n **** Student Details ***** " << endl;
            cout << "Enter name of the Student : ";
            cin >> sname;
            cout << "Enter class of the Student : ";
            cin >> standard;
            cout << "Enter Seat no of the Student : ";
            cin >> seat_no;
        }

        int displayStudent() {
            cout << "\nName: " << sname << "\t Class: " << standard << endl;
            cout << "Seat No.: " << seat_no << endl;
        }
};

class StudentMarks {
    public:
        string subject[5] = { "Physics", "Chemistry", "Maths", "English", "Computer" };
        int marks[5], total_marks = 0;
        float percentage = 0;

    public:
        int getStudentMarks() {
            cout << "\n **** Student Marks ***** " << endl;
            cout << "Enter Physics marks   : ";
            cin >> marks[0];
            cout << "Enter Chemistry marks : ";
            cin >> marks[1];
            cout << "Enter Maths marks     : ";
            cin >> marks[2];
            cout << "Enter English marks   : ";
            cin >> marks[3];
            cout << "Enter Computer marks  : ";
            cin >> marks[4];
        }

        int displayStudentMarks() {
            cout << "\nPhysics    : \t" << marks[0] << endl;
            cout << "Chemistry  : \t" << marks[1] << endl;
            cout << "Maths      : \t" << marks[2] << endl;
            cout << "English    : \t" << marks[3] << endl;
            cout << "Computer   : \t" << marks[4] << endl;

            total_marks = marks[0] + marks[1] + marks[2] + marks[3] + marks[4] + marks[5];

            percentage = (float) total_marks / 5;
            
            cout << "Total Marks (out of 500): " << total_marks << "\t";
            cout << "Percentage : " << percentage << "%" << endl;
        }
};

class StudentMarkSheet : public Student, public StudentMarks {
    public:
    int getMarkSheet() {
        getStudent();
        getStudentMarks();
    }

    int displayMarkSheet() {
        displayStudent();
        displayStudentMarks();
    }
};

int main()
{
    StudentMarkSheet sm;
    
    sm.getMarkSheet();

    cout << "\n **** Student Marksheet ***** " << endl;
    
    sm.displayMarkSheet();
    
    return 0;
}