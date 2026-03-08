#include <iostream>
using namespace std;
int main () {
     int a,b,c;
    cout <<"enter a :";
    cin>>a;
    cout <<"enter b :";
    cin>>b;
    cout <<"enter c :";
    cin>>c;
    if(a>b){
        if(a>c){
            cout <<a<<endl<<"is the greatest";
        }
        else{
            cout <<c<<endl<<"is the greatest";
        }
    }
    else{
        if(b>c){
            cout <<b<<endl<<"is the greatest";
        }
        else{
            cout <<c<<endl<<"is the greatest";
        }
    }
    return 0;
}