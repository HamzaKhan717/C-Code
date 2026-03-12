#include <iostream>
using namespace std;
int main () {
 
    int arr[] = {8,3,6,5,3,2,1};
    int x = sizeof(arr)/4;
    int mn = arr[0];
    for(int i=1; i<x; i++){ 
       if(arr[i]<mn) mn = arr[i];
        // mn = min(mn,arr[i]); //we can also use the built in method
    }
    cout <<mn;
}