#include <iostream>
using namespace std;
int main()
{
    int n1;
    cin >> n1;
    char ch;
    cin >> ch;
    int n2;
    cin >> n2;
    switch (ch)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;
    default:
        cout << "Invalid operator";
    }

    return 0;
}