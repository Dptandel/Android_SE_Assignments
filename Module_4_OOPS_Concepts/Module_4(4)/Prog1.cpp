// 1. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. 
// Data member of batsman. Total runs, Average runs and best performance. 
// Member functions input data, calculate average runs, Display data. (Single Inheritance)

#include <iostream>
#include <string>

using namespace std;

class Cricketer {
protected:
    string name;
    int age;
public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;
public:
    void inputData() {
        Cricketer::input();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        int matchesPlayed = 10;
        averageRuns = (float) totalRuns / matchesPlayed;
    }

    void displayData() {
        cout << "\nName: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total runs: " << totalRuns << endl;
        cout << "Average runs: " << averageRuns << endl;
        cout << "Best performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    batsman.calculateAverageRuns();
    cout << "<---- Cricketer Details ---->" << endl;
    batsman.displayData();
    return 0;
}
