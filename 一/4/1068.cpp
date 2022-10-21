#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m, i, a, s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    s=0;
    if (n <= 100)
    {
        for (i = 0; i < n; i++)
        {
            cin >> a;
            if (a == m)
            {
                s += 1;
            }
        }
    }
    cout << s << endl;
    return 0;
}