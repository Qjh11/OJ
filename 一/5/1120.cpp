#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, x, y, a[11][11];
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> x >> y;
    for (int j = 1; j <= n; j++)
        cout << "(" << x << "," << j << ")"
             << " ";
    cout << endl;
    for (int i = 1; i <= n; i++)
        cout << "(" << i << "," << y << ")"
             << " ";
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if (i - j == x - y)
                cout << "(" << i << "," << j << ")"
                     << " ";
    }
    cout << endl;
    for (int i = n; i >= 1; --i)
    {
        for (int j = n; j >= 1; --j)
            if (i + j == x + y)
                cout << "(" << i << "," << j << ")"
                     << " ";
    }
    cout << endl;
    return 0;
}