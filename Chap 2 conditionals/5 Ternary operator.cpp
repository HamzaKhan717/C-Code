#include <iostream>
using namespace std;
int main() {
    int x;                   // Ternary operator :
    cout << "enter a no. :"; //  Write if else in compressed form
    cin >> x;
    // if (x % 2 == 0)  cout << "even no." << endl; //  if and else is used for logic  
    // else cout << "number is odd" << endl;

    // Alternative method
    //(Condition) ? if true : if false;
    (x%2==0) ? cout << "even" :cout <<"odd";

}
