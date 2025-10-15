#include <iostream>
#include <string>
using namespace std;

// Base Class
class Base {
public:
    virtual void functionName() {  // Virtual function
        cout << "Base class function called." << endl;
    }
};

// Derived Class
class Derived : public Base {
public:
    void functionName() override {  // Override virtual function
        cout << "Derived class function called." << endl;
    }
};

int main() {
    Base* ptr;              // Pointer to base class
    ptr = new Derived();    // Points to derived class object

    ptr->functionName();    // Calls Derived's version at runtime (polymorphism)

    delete ptr;             // Free dynamically allocated memory
    return 0;
}

