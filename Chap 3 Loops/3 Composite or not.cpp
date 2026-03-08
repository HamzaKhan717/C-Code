#include <iostream>
using namespace std;
int main () {
    // //  Write a program to check if a number i composite or not
    // int w;     //  composite means 'n'has extra factors except 1 & n 
    // cout <<"Enter a no. :";
    // cin>>w;      
    // for(int i=2; i<=w/2; i++){     //Alternative   for(int i=n/2; i>=1; i--)
    //     if(w%i==0){             
    //         cout<<"composite";
    //         break; //break means to get out of the loop immiadiatly
    //     }
    // }
///////////////////////////////////////////////

    int w;    
    cout <<"Enter a no. :";
    cin>>w;   
    bool flag = true;     //  ture means prime number // it means int x = 1  // true mean 1 
    for(int i=2; i<=w/2; i++){   
        if(w%i==0){ 
            flag = false;           // false means composite 
            break;
        }
    }
    if(w==1) cout << "Neither composit nor prime";
    if(flag==true) cout <<"number is prime";
    else cout<<"number is composite";

    return 0;

}