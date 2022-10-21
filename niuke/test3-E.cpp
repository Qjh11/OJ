#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double n, s = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
        s *= i;
    printf("%.1lf\n", s);

    return 0;
}