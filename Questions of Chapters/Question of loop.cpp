#include <iostream>
using namespace std;
int main () {
// 1 :  print number from 1 to 100
    //     for(int i=1; i<=100;i++){
    //         cout<<i<<" ";
    //     } 
    //       //   OR
    //     //  for(int i=39; i<=167;i++){
    //     //     cout<<i<<" ";
    //     // }
    //            OR
    // print loop in reverse direction form 100 to 1.
    //      for(int i=100; i>=1;i--){
    //           cout<<i<<" ";
    // }
//print loop in 2 gaps e.g 100, 98, 96....
    //       for(int i=100; i>=1;i-=2){
    //           cout<<i<<" ";
    // }
//print loop in divide by 2 e.g 100, 50, 25, 12
    //   for(int i=100; i>=1;i/=2){
    //           cout<<i<<" ";
    // }
///////////////////////////////////
// 2 : print all the even number from 1 to 100
    // for(int i=1; i<=100; i++){
    //     if(i%2==0)
    //     cout<<i<<" ";
    // }       The loop is 100 times if it print just even numbers 
    //       OR      
    //  if we want the loop for 50 times
        // for(int i=2; i<=100; i=i+2){        //it is fast to run
        //     cout<<i<<" ";
        // }
             //    OR
  //       if we want the loop for 50 times
        // for(int i=1; i<=100; i=i+2){        //it is fast to run
        //     cout<<i<<" ";
        // }

    
//////////////////////////////////
// 3 : print all odd numbers from 1 to 100
//     
    // for(int i=1; i<=100; i++){
    //     if(i%2!=0)
    //     cout<<i<<" ";
    // }
//////////////////////////////////////
//  4 :    print the table of 19
    // for(int i=1; i<=10; i++){
    //     cout<<19*i<<endl;
    // }
    //       OR
//   alternative method of writing 19 table
//  loop 172 times
    // for(int i=19; i<=190; i++){      it is slow to run
    //     if(i%19==0)
    //     cout <<i<<" ";
    // }
    //       OR                   i+=19     we can also write as        
    // for(int i=19; i<=190; i+=19){ // i=i+19
    //     cout <<i<<" ";
    // }
 //////////////////////////////////////
// print the table of n 
    // for(int i=7; i<=70; i++){
    //     if(i%7==0)
    // }
    //         cout <<i<<" ";
    // 
///////////////////////////////
// display this geometric progression 3 12 48 upto n terms.
    // int x;
    // cout <<"enter a no. : ";
    // cin>>x;
    // int y = 3;
    // for(int i=1; i<=x; i++){
    //     cout <<y<<" ";
    //     y = y * 4;
    // }
//////////////////////////////////




    return 0;
}