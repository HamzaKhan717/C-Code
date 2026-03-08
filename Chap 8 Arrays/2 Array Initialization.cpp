#include <iostream>
using namespace std; 
int main () {  // if Declaration + initialization in one line initialization is not mandatory  
   int arr [5] = {4,5,6,3,8}; //Declaration + initialization                     i.e int arr [] = {4,5,6,3,8}; is ok
    for(int i=0; i<=4; i++){ // if you want in reverse
        cout <<arr[i]<<" ";    // for(int i=4; i>=0; i-- )
    }
}   