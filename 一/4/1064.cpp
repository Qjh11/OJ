#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i, a, b, c, a1, b1, c1, s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    a1 = 0;
    b1 = 0;
    c1 = 0;
    if (n >= 1 && n <= 17)
    {
        for (i = 1; i <= n; i++)
        {
            cin >> a >> b >> c;
            a1 += a;
            b1 += b;
            c1 += c;
        }
    }
    s = a1 + b1 + c1;
    printf("%d %d %d %d\n", a1, b1, c1, s);
    return 0;
}