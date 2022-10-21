#include <bits/stdc++.h>
using namespace std;
#define ll long long
double h(double a, double b)
{
    if (a == 0)
        return 1;
    if (a == 1)
        return 2 * b;
    if (a > 1)
        return 2 * b * h(a - 1, b) - 2 * (a - 1) * h(a - 2, b);
    return 0;
}
int main()
{
    double n, x;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> x;
    printf("%.2lf\n", h(n, x));
    return 0;
}