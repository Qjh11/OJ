#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int m, n, i, s;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n;
    s=0;
    if (m < n && n < 300 && m >= 0)
    {
        for (i = m; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                s += i;
            }
        }
    }
    cout << s << endl;
    return 0;
}