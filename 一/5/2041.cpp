
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, a[21][21] = {0};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j || i + j == n - 1)
                a[i][j] += 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j]<<" ";
        cout << endl;
    }

    return 0;
}