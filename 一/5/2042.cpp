#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m, a[100][100]={0};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] != 0)
                cout << i+1 << " " << j+1 << " " << a[i][j] << endl;
    return 0;
}