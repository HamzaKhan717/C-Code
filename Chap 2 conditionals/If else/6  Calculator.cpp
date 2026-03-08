#include <iostream>
using namespace std;
int main()
{
    float n1, n2;
    cin >> n1;
    char ch;
    cin >> ch;
    cin >> n2;
    if (ch == '+')
    {
        cout << n1 + n2;
    }
    else if (ch == '-')
    {
        cout << n1 - n2;
    }
    else if (ch == '/')
    {
        cout << n1 / n2;
    }
    else if (ch == '*')
    {
        cout << n1 * n2;
    }

    return 0;
}