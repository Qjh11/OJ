#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b, c, x;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    for (x = 2; x < a; x++)
    {
        if (a % x == b % x && a % x == c % x)
        {
            cout << x << endl;
            break;
        }
    }

    return 0;
}