#include <iostream>
using namespace std;

int main () {
    char un ;
    cout<<"Enter username: ";
    cin>>un;
    int pass ;
    cout<<"Enter password : ";
    cin>>pass;
    if(un !='H'){
        cout << "Invalid username";
    }
    else if(pass != 12345678){
        cout << "Invalid password";
    }
    else{
        cout << "Login successful";
    }
    
   
}