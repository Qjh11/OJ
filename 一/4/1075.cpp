#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i, s, a, m;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m;
    cin >> n;
    s = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        m -= a;
        if (m < 0)
        {
            s += 1;
            m += a;
        }
    }
    cout << s << endl;

    return 0;
}