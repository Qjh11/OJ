#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i, n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    double m[n], s[n], a[n], b[n], x;
    int c[n];
    x = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
        s[i] = sqrt(a[i] * a[i] + b[i] * b[i]);
        m[i] = c[i] + s[i] / 25 + c[i] * 0.5;
        x += m[i];
    }

    cout << ceil(x) << endl;
    return 0;
}