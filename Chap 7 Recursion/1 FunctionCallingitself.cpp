#include <iostream>
using namespace std;
void greet(){
    cout<<"Hay"<<endl;
    greet();   // This is called function calling itself
}              // It is never ending because it is calling itself again and again
int main () {
    greet();

}