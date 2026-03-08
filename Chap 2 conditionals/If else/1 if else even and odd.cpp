#include <iostream>
using namespace std;
int main () {
    int x;
    cout <<"enter a no. :";
    cin>>x;
    if (x%2==0) {           //  if and else is used for logic
         cout <<"even no. "<<endl;
         cout<<"yes";
    }   
    if(x%2!=0){
         cout <<"number is odd "; //we can also write as   ----   else // cout <<"number is odd";
    }
}
