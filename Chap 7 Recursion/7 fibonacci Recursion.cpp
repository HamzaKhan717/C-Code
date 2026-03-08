#include <iostream>
using namespace std;  // Make a function which calculater the factorial of N using recursion
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1) + fibo(n-2);
}
             
int main () {
    int n;
    cout <<"Enter a no.";
    cin>>n;
    cout <<fibo(n);

}