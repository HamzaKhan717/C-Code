#include <iostream>
using namespace std;
void swap (int x, int y){
    int temp = x;                // This concept is called pass by values
    x = y;
    y = temp;
}
int main () {
    int x = 6;
    int y = 8;
    cout <<x<<" "<<y<<endl; 
    swap(x,y);                 // it will not swap because  swap(x,y) in this case (x,y) = (6,8)  actual values
    cout <<x<<" "<<y<<endl;

//////////////////////////////////////

//     void swap (int& x, int& y){
//     int temp = x;                      // This concept is called pass by refrence
//     x = y;
//     y = temp;
// }
// int main () {
//     int x = 6;
//     int y = 8;
//     cout <<x<<" "<<y<<endl; 
//     swap(x,y);                 
//     cout <<x<<" "<<y<<endl;
// }
}