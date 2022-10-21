#include <bits/stdc++.h>
using namespace std;
#define ll long long
int x, a, b, c, y;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x;
    c = x / 4;
    y = x % 4;
    if (y == 0)
    {
        cout << a << " " << b << " " << c << endl;
    }
    else if (y == 1)
    {
        b = 1;
        c = c - 1;
        cout << a << " " << b << " " << c << endl;
    }
    else if (y == 2)
    {
        a = 1;
        c = c - 1;
        cout << a << " " << b << " " << c << endl;
    }
    else if (y == 3)
    {
        b = 1;
        a = 1;
        c = c - 2;
        cout << a << " " << b << " " << c << endl;
    }

    return 0;
}