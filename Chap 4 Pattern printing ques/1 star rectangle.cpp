#include <iostream>
using namespace std;
int main (){
   // rows ->m, cols -> n
    int m;       // horizontal is rows  and vertical is coloumns
    cout<<"Enter a number of cols: ";
    cin>>m;
    int n;
    cout <<"Enter a number of rows: ";
    cin>>n;
    for(int i=1; i<=n; i++){
          for(int h=1; h<=m; h++){ // it is recomended that in loop we have not to use 
               cout<<" * ";        // i in above and belowe loop
         }
         cout<<endl;
    }







}

