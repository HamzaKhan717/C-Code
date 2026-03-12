#include <iostream>
using namespace std;
int main () {
    // int arr[] = {21,32,5,4,7,9};
    // // it gives size of array
    // cout <<sizeof(arr)<<endl;    // It shows us size of operator in byte i.e (int, float, char etc .)
    // int sum = 0;        // If I want to take no. of elements in array { sizeof(arr)/4}
    // for(int i=0; i<=5; i++){
    //     // it print sum of the numbers
    //     sum += arr[i];
    // }
    // cout <<sum;
//////////////////////////////////
//It print sum of elements on basis of number of elements
    // int arr[] = {4,3,6,5,3,2,1};
    // int n = sizeof(arr)/4;
    // int sum = 0;
    // for(int i=0; i<n; i++){ 
    //     sum += arr[i];
    // }
    // cout <<sum;

///////////////////////////
// calculate the product of all the elements in the given array.
    int arr[] = {4,3,5};
    int n = sizeof(arr)/4;
    int prod = 1;
    for(int i=0; i<n; i++){ 
        prod *= arr[i];
    }
    cout <<prod;
}