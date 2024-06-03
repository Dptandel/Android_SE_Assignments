// 3. Write a C++ program to create a class called Car that has private member variables for company, model, and year. 
// Implement member functions to get and set these variables.

#include<iostream>
#include<string>
using namespace std;

class Car {
private:
    string companyName, modelName;
    int year;

public:
    void getCarDetails () {
        cout <<"Enter Car Company Name: ";
        getline(cin, companyName);
        cout <<"Model Name: ";
        getline(cin, modelName);
        cout <<"Year of Model: ";
        cin >> year;
    }

    void setCarDetails (string cname, string mname, int y) {
        companyName = cname;
        modelName = mname;
        year = y;
    }

    void displayCarDetails () {
        cout << endl;
        cout << "Car Details: " << endl; 
        cout << "Company Name: " << companyName << endl;
        cout << "Model Name: " << modelName << endl;
        cout << "Year of Model: " << year << endl;
    }
};

int main() {
    Car c;
    
    c.getCarDetails();
    c.displayCarDetails();

    return 0;
}
