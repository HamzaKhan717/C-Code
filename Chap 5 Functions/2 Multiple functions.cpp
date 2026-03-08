#include <iostream>
using namespace std;

void y () {
    cout << "I am in pakistan"<<endl;
    cout << "Where are you"<<endl;
}

void x () {
    cout <<"I am in USA"<<endl;
    y ();
}

int main () {
    cout <<"Hi pakistan"<<endl;
    y ();
    cout <<"good work"<<endl;
    x ();
    cout <<"kpk";

    return 0;
     
}