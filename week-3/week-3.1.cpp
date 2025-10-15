#include <iostream>
using namespace std;

class bank {
public:
    int acc_no, balance;
    string name;

    void deposit() {
        int x;
        cout << "Enter how much you want to deposit: ";
        cin >> x;
        balance = x;
    }

    void withdraw() {
        int y;
        cout << "Enter how much you want to withdraw: ";
        cin >> y;

        if (y > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance = balance - y;
        }
    }

    void show_bal() {
        cout << "Your balance: " << balance << endl;
    }
};

int main() {
    bank b;
    b.deposit();
    b.withdraw();
    b.show_bal();
    return 0;
}

