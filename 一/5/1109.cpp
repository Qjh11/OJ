#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    int a[n - 1], b[1001] = {0}, k = 0;
    for (int i = 0; i < n; i++)
    {
        a[i] = 1;
    }
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= m; i++)
        {
            if (j % i == 0)
            {
                if (a[j - 1] == 0)
                {
                    a[j - 1] = 1;
                }
                else if (a[j - 1] == 1)
                {
                    a[j - 1] = 0;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            b[k] = (i + 1);
            ++k;
        }
    }
    for (int i = 0; i < k; i++)
    {
        if (i == k - 1)
            cout << b[i] << endl;
        else
            cout << b[i] << ",";
    }

    return 0;
}