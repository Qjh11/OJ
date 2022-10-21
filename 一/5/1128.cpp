#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m, a[101][101], b[101][101];
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
            {
                b[i][j] = a[i][j];
            }
            else
            {
                b[i][j] = round((double)(a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1] + a[i][j]) / 5);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}