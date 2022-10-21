#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double avg;
    int n, i, a, s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    s = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> a;
        if (abs(a) <= 10000)
        {
            s += a;
        }
    }
    avg = double(s) / double(n);
    printf("%d %.5lf\n", s, avg);

    return 0;
}