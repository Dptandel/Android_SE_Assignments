// 9. Write a Program of Two 1D Matrix Addition using Operator Overloading.

#include <iostream>
using namespace std;

class Matrix {
private:
    int a[6];
public:
    void get_data();
    void display();
    Matrix operator+(const Matrix& x); // Declaration of overloaded addition operator
};

void Matrix::get_data() {
    cout << "Enter Matrix element: " << endl;
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
    }
}

void Matrix::display() {
    for (int i = 0; i < 6; i++) {
        cout << a[i] << "\t";
    }
}

Matrix Matrix::operator+(const Matrix& x) {
    Matrix result;
    for (int i = 0; i < 6; i++) {
        result.a[i] = a[i] + x.a[i];
    }
    return result;
}

int main() {
    Matrix m, n, result;
    
    m.get_data();
    n.get_data();

    cout << "\nMatrix 'M': \n";
    m.display();

    cout << endl;
    
    cout << "\nMatrix 'N': \n";
    n.display();

    // Perform addition using overloaded operator
    result = m + n;

    cout << "\n\nAddition of Matrix (M + N):\n";
    result.display();
    cout << endl;

    return 0;
}