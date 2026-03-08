#include <iostream>
using namespace std;
// void change(int x){
//     x = 8;
// }
// int main () {
//     int x = 3;
//     cout<<x<<endl;
//     change(x);           // It is passed by values
//     cout<<x<<endl;
// }

//////////////////////////////
    void change(int arr[]){
        arr[0] = 9;
    }
    int main () {
        int arr[3] = {1,2,3};
        for(int i=0; i<=2; i++){
            cout <<arr[i]<<" ";
        }
        cout <<endl;
        change(arr);     // Array is pass by refrence
        for(int i=0; i<=2; i++){
            cout <<arr[i]<<" ";
        }
    }
