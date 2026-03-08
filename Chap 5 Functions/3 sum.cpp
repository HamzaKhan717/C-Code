#include <iostream>
using namespace std;

void sum(int a, int b)
{                  // (a,b) is called formal parameters
    cout << a + b; // or parameters of a function
}

int main()
{
    // int a;
    // cout << "Enter 1st number :";
    // cin>>a;
    // int b;
    // cout << "Enter 2nd number :";
    // cin>>b;
    // sum (a,b);
    //   we can also write it as this
    sum(5, 8); // In this case (5,8) are actual parameters
}