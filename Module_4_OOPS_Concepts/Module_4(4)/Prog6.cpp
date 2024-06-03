// 6. Write a C++ Program to show access to Private Public and Protected using Inheritance

#include <iostream>
using namespace std;

class Base {
private:
    int a = 1;
protected:
    int b = 2;
public:
    int c = 3;
};

class PublicDerived : public Base {
public:
    void accessPublic() {
        cout << "Public member of Base: " << c << endl;
    }
    void accessProtected() {
        cout << "Protected member of Base: " << b << endl;
    }

    // void accessPrivate() {
    //     cout << "Private member of Base: " << a << endl;  // not accessible
    // }
};

class ProtectedDerived : protected Base {
public:
    void accessPublic() {
        cout << "Public member of Base: " << c << endl;
    }
    void accessProtected() {
        cout << "Protected member of Base: " << b << endl;
    }
    // void accessPrivate() {
    //     cout << "Private member of Base: " << a << endl;  // not accessible
    // }
};

class PrivateDerived : private Base {
public:
    void accessPublic() {
        cout << "Public member of Base: " << c << endl;
    }
    // void accessProtected() {
    //     cout << "Protected member of Base: " << b << endl;  // not accessible
    // }
    // void accessPrivate() {
    //     cout << "Private member of Base: " << a << endl;  // not accessible
    // }
};

int main() {
    cout << "Public Inheritance: " << endl;

    PublicDerived publicDerived;
    
    publicDerived.accessPublic();
    publicDerived.accessProtected();
    // publicDerived.accessPrivate();

    cout << "\nProtected Inheritance: " << endl;

    ProtectedDerived protectedDerived;

    protectedDerived.accessPublic();
    protectedDerived.accessProtected();
    // protectedDerived.accessPrivate();

    cout << "\nPrivate Inheritance: " << endl;

    PrivateDerived privateDerived;

    privateDerived.accessPublic();
    // privateDerived.accessProtected();
    // privateDerived.accessPrivate();

    return 0;
}
