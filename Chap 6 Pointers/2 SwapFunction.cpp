#include <iostream>
using namespace std;
void swap (int* a, int* b){
    int temp = *a;                // This concept is called pass by values
    *a = *b;
    *b = temp;
}
int main () {
    int x = 6;
    int y = 8;
    cout <<x<<" "<<y<<endl; 
    swap(&x,&y);                 // it will not swap because  swap(x,y) in this case (x,y) = (6,8)  actual values
    cout <<x<<" "<<y<<endl;
}