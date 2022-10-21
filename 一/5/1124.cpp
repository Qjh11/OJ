#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m, a[101][101],b[101][101];
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
            for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> b[i][j];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            a[i][j] += b[i][j];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}