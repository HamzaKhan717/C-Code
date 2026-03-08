#include <iostream>
using namespace std;
int main () {
    // for(int i=1; i<=20; i++){
    //     if(i==3 || i==8) continue; //3 and 8 will not print
    //    //if(i==3) continue
    //    //if(i==8) continue     //we can also write it distingvish 
    //         cout<<i<<" ";
    // } //  OR

    //  for(int i=1; i<=20; i++){
    //     if(i!=4 && i!=7)    //4 and 7 will not print
    //         cout<<i<<" ";
    // }
//////////////////////////////////////////////////
// write a program to print odd numbers from 1 to 100 using continue statement?
    for(int i=1; i<=100; i++){
         if(i%2==0)  continue;
          cout<<i<<" ";
    }
}