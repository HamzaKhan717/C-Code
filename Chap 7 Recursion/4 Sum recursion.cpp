#include <iostream>
using namespace std;  //Print sum from 1 to n in (return type)
int sum(int n){
    if(n==1) return 1;
    return n + sum(n-1);
}
             
int main () {
    int n;
    cout <<"Enter a no.";
    cin>>n;
    cout <<sum(n);

}