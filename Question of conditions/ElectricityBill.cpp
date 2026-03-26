#include <iostream>
using namespace std;
int main () {
    int unit;
    cout << "Enter units : ";
    cin>>unit;
    float  bill;
   
    if(unit<=100){
        bill = (unit*5);
    }
    else if(unit<=200){
        bill = (100*5)+(unit-100)*10;
    }
    else{
        bill = (100*5)+(100*10)+(unit-200)*15;
    }
    cout<< bill;
    
        
    return 0;
    
    
}