// Write a C++ program to create a class called Person that has private member variables for name, age and country. 
// Implement member functions to set and get the values of these variables.

#include<iostream>
#include<string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    // Setter functions
    void set_name(string n) {
        name = n;
    }

    void set_age(int a) {
        age = a;
    }

    void set_country(string c) {
        country = c;
    }

    // Getter functions
    string get_name() {
        return name;
    }

    int get_age() {
        return age;
    }

    string get_country() {
        return country;
    }
};

int main() {
    Person person;

    // Setting values using setter functions
    person.set_name("Dharmin");
    person.set_age(21);
    person.set_country("INDIA");

    // Getting and displaying values using getter functions
    cout << "Name: " << person.get_name() << endl;
    cout << "Age: " << person.get_age() << endl;
    cout << "Country: " << person.get_country() << endl;

    return 0;
}
