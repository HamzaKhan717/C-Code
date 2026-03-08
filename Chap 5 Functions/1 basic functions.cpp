#include <iostream>
using namespace std;

void hamza () {
    cout <<"Hello Hamza khan" << endl;
    return;                   //
    cout << "How are you";   // This line is not printing because
}                            //  nothing will run after return;
void x () {
    cout << "Are you OK ";
}
int main () {
    hamza ();
    cout << "Try again please " << endl;
    x ();
}