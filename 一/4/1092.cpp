#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double e = 1, x = 1;
    int n, i;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        x = x * i;
        e += (1.0 / x);
    }
printf("%.10lf\n",e);
    return 0;
}