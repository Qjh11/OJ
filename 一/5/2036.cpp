#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int a[n - 1];
    for (int i = 0; i < n; i++)
    {
        a[i] = 1;
    }
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % j == 0)
            {
                if (a[i - 1] == 0)
                    a[i - 1] = 1;
                else if (a[i - 1] == 1)
                    a[i - 1] = 0;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i - 1] == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}