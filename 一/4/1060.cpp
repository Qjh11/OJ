#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    float s, a;
    int n, i;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        if (abs(a) <= 1000)
        {
            s += a;
        }
    }
    printf("%.4f\n", s / n);

    return 0;
}