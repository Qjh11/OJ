#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, s, i;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    s = 1;
    if (n >= 1 && n <= 20)
    {
        for (i = 1; i <= n; i++)
        {
            s *= i;
        }
    }
    cout << s << endl;
    return 0;
}