#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int m, n, a[101][101], s = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == m)
                s += a[i][j];
            else
            {
                if (j == 1 || j == n)
                    s += a[i][j];
            }
        }
    }
    cout << s << endl;
    return 0;
}