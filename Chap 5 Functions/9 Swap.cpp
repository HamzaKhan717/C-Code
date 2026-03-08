#include <iostream>
using namespace std;
int main () {  // swap means putting value of one variable into another
    int x = 2;  // but the value will not change
    int y = 4;
    // Method no. 1  using extra variable
    // cout <<x<<" "<<y<<endl;
    // int temporary = x;
    // x = y;
    // y = temporary;
    // cout <<x<<" "<<y<<endl;

    // Method no. 2 without using extra variable
    cout <<x<<" "<<y<<endl;
    x= x+y;
    y= x-y;
    x= x-y;
    cout <<x<<" "<<y<<endl;
}