#include <iostream>
using namespace std;
int main () {
    int x=3,y,z;
    y=x=10;      // it is solved from right to left
    z=x>10;      // it is false = zero (if we have true then=one)
    cout <<x<<" "<<y<<" "<<z;
}