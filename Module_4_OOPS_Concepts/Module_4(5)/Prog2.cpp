// 2. Write a program of to sort the array using templates.

#include<iostream>
using namespace std;

template <typename T1> 
T1 arrayASort(T1 a[], int s) {
    T1 temp;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i] < a[j]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

template <typename T2>
T2 arrayDSort(T2 a[], int s) {
    T2 temp;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i] > a[j]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main()
{
    int a[5] = {50, 60, 30, 40, 20};

    cout << "Before Sorting Array : ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    arrayASort<int>(a, 5);  //Ascending order
    
    cout << "\nAfter Sorting Array (Ascending): ";
    for (int i = 0; i <5; i++) {
        cout << a[i] << " ";
    }

    arrayDSort<int>(a, 5);  //Descending order

    cout << "\nAfter Sorting Array (Descending): ";
    for (int i = 0; i <5; i++) {
        cout << a[i] << " ";
    }
    return 0;
}