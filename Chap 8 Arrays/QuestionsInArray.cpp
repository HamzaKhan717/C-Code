#include <iostream>
using namespace std;
int main () {
    // int arr[] = {1,2,3,4,5};
    // int n = 5;
    // for(int i=0; i<n; i++){
    //     if(arr[i]%2==0 ){
    //         arr[i] +=10;
    //     }
    //     else{
    //         arr[i]*=2;
    //     }
    // }
    // for(int i=0; i<n; i++){
    // cout <<arr[i]<<" ";
    // }
///////////////////////////////////
    int arr[] = {1,4,5,6,7,3,9,8};
    int n = 3;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>n){
             count ++;
        }
    }
    cout<<count;
    
}