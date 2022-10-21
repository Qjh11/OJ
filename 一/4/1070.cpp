#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i;
    double x;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x >> n;
    if (n >= 1 && n <= 100)
    {
        for (i = 0; i < n; i++)
        {
            x = x * 1.001;
        }
    }
    printf("%.4lf\n", x);
    return 0;
}