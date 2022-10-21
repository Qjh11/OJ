#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b, d;
    char c;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    if (c == '+')
    {
        d = a + b;
        cout << d << endl;
    }
    else if (c == '-')
    {
        d = a - b;
        cout << d << endl;
    }
    else if (c == '*')
    {
        d = a * b;
        cout << d << endl;
    }
    else if (c == '/')
    {

        if (b == 0)
        {
            cout << "Divided by zero!" << endl;
        }
        else
        {
            d = a / b;
            cout << d << endl;
        }
    }
    else
    {
        cout << "Invalid operator!" << endl;
    }
    return 0;
}