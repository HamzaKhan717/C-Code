#include <iostream>
using namespace std;
// void print(int x, int n){  //Recursion has 3 steps
//     if(x>n) return;       // base case
//     cout <<n<<endl;       // work
//     print(x+1,n);         // call
// }             
// int main () {
//     int n;
//     cout <<"Enter a no.";
//     cin>>n;
//     print(1,n);

// }
//////////////////////////////////////
// print N to 1 without using extra parameter

// void print(int n){  //Recursion has 3 steps
//     if(n==0) return;       // base case
//     cout <<n<<endl;       // work
//     print(n-1);         // call
// }             
// int main () {
//     int n;
//     cout <<"Enter a no.";
//     cin>>n;
//     print(n);

// }
//////////////////////////////
// Print 1 to N number

void print(int n){  
    if(n==0) return;     
    print(n-1);    
    cout <<n<<endl;     
}             
int main () {
    int n;
    cout <<"Enter a no.";
    cin>>n;
    print(n);

}