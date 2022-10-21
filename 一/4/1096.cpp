#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int l, r, a, x = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        a = i;
        while (a != 0)
        {
            if (a % 10 == 2)
            {
                ++x;
            }
            a /= 10;
        }
    }
    cout << x << endl;
    return 0;
}