#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m, k, a[101][101], b[101][101], c[101][101]={0};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= k; j++)
            cin >> b[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= k; j++)
            for (int z = 1; z <= m; z++)
                c[i][j]+= a[i][z] * b[z][j];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
    return 0;
}