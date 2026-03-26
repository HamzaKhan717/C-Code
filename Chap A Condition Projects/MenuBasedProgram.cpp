#include <iostream>
using namespace std;

int main () {
    int choise, num1, num2;    
    cout<<" Enter number 1 to check even and odd\n ";
    cout<<"Enter number 2 to check greater\n ";
    cout<<"Enter number 3 to exit\n";
    cout<<" Enter choise : ";
    cin>>choise;
    if(choise == 1){             // if you enter 1 then the number odd even should be checked
        cout<<"Enter number 1 : ";
        cin>>num1;
        if(num1 % 2 == 0){
            cout<<"Even number";
        }
        else{
            cout<<"Odd number";
        }
    }
    else if(choise == 2){               //if you enter 2 then the greater and lesser should be checked
        cout<<"Enter number 1 : ";
        cin>>num1; 
        //cout<<endl;
        cout<<"Enter number 2 : ";
        cin>>num2;
        if(num1 > num2){
            cout<<num1 <<" is greater";
        }
        else{
            cout<<num2 <<" is greater";
        }
    }
    else{                      // if you enter number greater then 2 then just exit should be print
        cout << " Exit";       // and nothing else should be print
    }
}