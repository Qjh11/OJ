#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i, a, max, min;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    min = 1000;
    max = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        if (a <= 1000 && a >= 0)
        {
            if (a > max)
            {
                max = a;
            }
            else if (a < min)
            {
                min = a;
            }
        }
    }
    printf("%d\n", max - min);
    return 0;
}