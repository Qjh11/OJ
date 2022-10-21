#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i, n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    float s = 0, q[n], p[n];
    q[0] = 2;
    p[0] = 1;
    for (i = 0; i < n; i++)
    {
        s = s + (q[i] / p[i]);
        q[i + 1] = q[i] + p[i];
        p[i + 1] = q[i];
    }
    printf("%.4f\n", s);
    return 0;
}