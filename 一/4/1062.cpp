#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i, a, max;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    max = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        if (a <= 100 && a >= 1)
        {
            if (a > max)
            {
                max = a;
            }
        }
    }
    printf("%d\n", max);

    return 0;
}