// 7. Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
// Include member functions to set and get these variables, as well as to validate if the date is valid.

#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    int getDay() { return day; }

    void setDay(int d) { day = d; }

    int getMonth() { return month; }

    void setMonth(int m) { month = m; }

    int getYear() { return year; }

    void setYear(int y) { year = y; }

    // to validate the date
    bool isValidDate() {
        if (year < 1 || year > 9999) {
            return false;
        }

        if (month < 1 || month > 12) {
            return false;
        }

        if (day < 1 || day > 31) {
            return false;
        }

        // check February month with leap year or not
        if (month == 2) {
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                return day <= 29;
            } else {
                return day <= 28;
            }
        }

        // Months of April, June, September, and November have number of days less or equal to 30
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            return day <= 30;
        }

        return true;
    }

};

int main() {
    int day, month, year;

    // Get date from the user
    cout << "Enter the date (DD MM YYYY): ";
    cin >> day >> month >> year;

    // Date object
    Date date(day, month, year);

    // Validate the date
    if (!date.isValidDate()) {
        cout << "Invalid date." << endl;
        return 1;
    }

    // Print the date
    cout << "You entered valid date...!"<< endl;
    cout << "The date is: " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << endl;

    return 0;
}