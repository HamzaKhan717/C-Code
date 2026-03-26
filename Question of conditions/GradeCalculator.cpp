#include <iostream>
using namespace std;
int main ()
{
    int x;
    cout<<"Enter your marks : ";
    cin>> x;
    if(x>=0 && x<=100){
        if(x>=90){
            cout<<" Grade A ";
        }
        else if(x>80){
            cout<<" Grade B ";
        }
        else if(x>70){
            cout<<" Grade C ";
        }
        else if(x>60){
            cout<<" Grade D ";
        }
        else if(x<60){
            cout<<" Grade F "<<endl;
            cout<<" Fail";
        }
        
    }
}