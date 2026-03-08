#include <iostream>
using namespace std;  // Make a function which calculater the factorial of N using recursion
int fact(int n){
    if(n==1 || n==1) return 1;
    return n * fact(n-1);
}
             
int main () {
    int n;
    cout <<"Enter a no.";
    cin>>n;
    cout <<fact(n);

}