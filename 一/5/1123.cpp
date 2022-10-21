#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int m, n, a[101][101], b[101][101];
    double k = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> b[i][j];

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == b[i][j])
            {
                ++k;
            }
        }
    }

    printf("%.2lf\n", (k * 100) / (n * m));
    return 0;
}