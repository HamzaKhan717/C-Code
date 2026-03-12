#include <iostream>
using namespace std;
int main () {
 
    int arr[] = {8,3,6,5,3,2,1};
    int x = sizeof(arr)/4;
    int mx = arr[0];
    for(int i=1; i<x; i++){ 
       if(arr[i]>mx) mx = arr[i];
        // mx = max(mx,arr[i]); //we can also use the built in method
    }
    cout <<mx;
}