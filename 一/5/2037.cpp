#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m, i=0, x, j = 0,a[1001]={0};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    x = n;
    while (x > 0)
    {
        ++i;
        if (i > n)
            i = 1;
        if (a[i] == 0)
        {
            ++j;
            if (j == m)
            {
                a[i] = 1;
                j = 0;
                --x;
                cout << i << " ";
            }
        }
    }

    return 0;
}