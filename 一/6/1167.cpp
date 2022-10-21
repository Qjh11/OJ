#include <bits/stdc++.h>
using namespace std;
#define ll long long
double f(double a, double b)
{
    if (b == 1)
        return a/(a + b);
    return a /(b+f(a,b-1));
}
int main()
{
    double x, n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x >> n;
    printf("%.2lf\n",f(x, n));
    return 0;
}