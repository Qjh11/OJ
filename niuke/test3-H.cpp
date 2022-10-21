#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i, j, n, m, s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    for (i = n; i <= m; i++)
    {
        s = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
                s += j;
        }
        if (i == 1)
            cout << 1 << " ";
        if (s == i)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}