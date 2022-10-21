#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, k;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        k = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                ++k;
            }
        }
        if (k == 1)
        {
            cout << i << endl;
        }
    }

    return 0;
}