#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, a[10001], b[10001], x[10001], y[10001], c, d, k = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> x[i] >> y[i];
    cin >> c >> d;
    for (int i = n - 1; i >= 0; --i)
    {

        if (c <= a[i] + x[i] && d <= b[i] + y[i] && c >= a[i] && d >= b[i])
        {
            cout << i + 1 << endl;
            ++k;
            break;
        }
    }
    if (k == 0)
        cout << "-1" << endl;

    return 0;
}