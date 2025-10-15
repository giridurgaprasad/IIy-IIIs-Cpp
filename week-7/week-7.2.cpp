#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor Called" << endl;
    }
    ~Base() {
        cout << "Base Destructor Called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor Called" << endl;
    }
    ~Derived() {
        cout << "Derived Destructor Called" << endl;
    }
};

class MoreDerived : public Derived {
public:
    MoreDerived() {
        cout << "MoreDerived Constructor Called" << endl;
    }
    ~MoreDerived() {
        cout << "MoreDerived Destructor Called" << endl;
    }
};

int main() {
    cout << "Creating object..." << endl;
    MoreDerived obj;
    cout << "Object created." << endl;
    cout << "Exiting main..." << endl;
    return 0;
}

