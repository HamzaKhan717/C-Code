#include <iostream>
using namespace std;
int main () {
    // int x=3,y,z;
    // y=x=10;      // it is solved from right to left
    // z=x>10;      // it is false = zero (if we have true then=one)
    // cout <<x<<" "<<y<<" "<<z;
    int arr[8] = {1,6,3,56,5,6,87,8};
    int x=0;
    for(int i=0; i<=5; i++){
        cout<<arr[i]<<" ";
    }
        cin>>x;
        arr[6] = x + 3;
        cin>>x;
        arr[7] = x + 3;
        cout<<" ";
        cout<<arr[8];

        
    
        

        

        
       

}