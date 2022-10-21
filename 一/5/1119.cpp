#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int m, n, a[6][6] = {0};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
    cin >> m >> n;
    for (int i = 0; i < 5; i++)
        a[5][i] = a[m - 1][i];
    for (int i = 0; i < 5; i++)
        a[m - 1][i] = a[n - 1][i];
    for (int i = 0; i < 5; i++)
        a[n - 1][i] = a[5][i];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}