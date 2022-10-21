#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int m, n, s, i;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n;
    s = m > n ? n : m;
    for (i = s; i >= 1; --i)
    {
        if (m % i == 0 && n % i == 0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}