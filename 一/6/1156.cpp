#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double x, s = 0, f = 1, n, i = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    x = 1 / sqrt(3);
    n = x;
    while ((n / i) >= 1e-6)
    {
        s += f * n / i;
        n *= x * x;
        i += 2;
        f = -f;
    }
    printf("%.10lf\n", (6 * s));

    return 0;
}