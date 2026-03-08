
#include <iostream>
using namespace std;
int main() {

    int balance;
    int withdraw;
    int fee = 0;

    cout << "Enter balance: ";
    cin >> balance;

    cout << "Enter withdraw amount: ";
    cin >> withdraw;

    if (balance < 0 || withdraw < 0) {
        cout << "Invalid input";
    }
    else {

        if (withdraw > balance / 2) {
            fee = withdraw * 2 / 100;
        }
        if (balance - withdraw - fee >= 500) {
            cout << "Transaction Successful" << endl;
            cout << "Fee: " << fee << endl;
            cout << "Final Balance: " << balance - withdraw - fee;
        }
        else {
            cout << "Transaction Failed";
        }
    }

    return 0;
}
