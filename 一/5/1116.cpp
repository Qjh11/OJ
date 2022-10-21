#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[1000001], b[1000001], mx = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    b[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        b[i] = a[i] == a[i - 1] ? b[i - 1] + 1 : 1;
        mx = max(mx, b[i]);
    }
    cout << mx;
    return 0;
}