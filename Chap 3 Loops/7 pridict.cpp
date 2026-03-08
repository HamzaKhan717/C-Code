#include <iostream>
using namespace std;
int main () {       // it is called infinite loop
//     int i;
//     while(i=30){  // the value is assign as 30
//         cout<<i<<" "; // it will print 30
//         i++;  // also write as i= i+1;  // add 1 to 30 so it become 3
// }                // so this loop will never end it will print no. infinit times

///////////////////////////////////////
    // while('a'<'b')  // This is also infinite loop
    //     cout<< "hamza khan"<<endl;

//////////////////////////////////////
// pridict the output

    // int i=10;
    // while(i=20)
    // printf("\nA computer buff!");
////////////////////////////////////
// predict the output
    int x = 4, y = 0;
    while(x>=0){
        x--;
        x++;
        if(x==y)
            continue;
        else
            cout<<x<<" "<<y<<endl;
    }


}