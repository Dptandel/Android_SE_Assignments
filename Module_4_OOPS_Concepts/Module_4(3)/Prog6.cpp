// 6. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. 
// Include member functions to calculate and set salary based on employee performance. Using of constructor

#include<iostream>
using namespace std;

class Employee {
    private:
        string name;
        int employee_id;
        double salary;

    public:
        Employee(string emp_name, int emp_id, double emp_salary) {
            name = emp_name;
            employee_id = emp_id;
            salary = emp_salary;
        }

        // Function to calculate salary based on performance rating
        void calculate_salary(char performance) {
            if (performance == 'A') {
                // 10% raise
                salary += salary * 0.10;
            } else if (performance == 'B') {
                // 5% raise
                salary += salary * 0.05;
            } else if (performance == 'C') {
                // No change in salary
            } else {
                cout << "Invalid performance rating." << endl;
            }
        }

        // Function to set the salary explicitly
        void set_salary(double new_salary) {
            salary = new_salary;
        }

        // Function to display employee details
        void display() {
            cout << "Employee ID: " << employee_id << endl;
            cout << "Name: " << name << endl;
            cout << "Salary: Rs. " << salary << endl;
        }
};

int main() {
    string name;
    int employee_id;
    double salary;
    char performance_rating;

    cout << "Enter Employee ID: ";
    cin >> employee_id;
    cout << "Enter employee Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter employee salary: ";
    cin >> salary;

    Employee emp(name, employee_id, salary);

    cout << "\nInitial details:" << endl;
    emp.display();

    cout << "\nEnter A for Best Employee...!" << endl;
    cout << "Enter B for Good Employee...!" << endl;
    cout << "Enter C for Average Employee...!" << endl;
    cout << "\nEnter Employee Performance Rating: ";
    cin >> performance_rating;

    emp.calculate_salary(performance_rating);

    cout << "\nUpdated Details after Performance Review:" << endl;
    emp.display();

    return 0;
}
