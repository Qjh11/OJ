#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    float s;
    int n, a, i;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        if (a >= 15 && a <= 25)
        {
            s += a;
        }
    }
    printf("%.2f\n", s / n);

    return 0;
}