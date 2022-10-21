#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int x = 0, y = 0, m;
    for (int i = 1; i <= 12; i++)
    {
        x += 300;
        cin >> m;
        x -= m;
        if (x < 0)
        {
            x = -i;
            break;
        }
        y += x / 100 * 100;
        x %= 100;
    }
    if (x < 0)
        cout << x << endl;
    else
        cout << x + y * 1.2 << endl;
    return 0;
}