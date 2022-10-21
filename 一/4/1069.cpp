#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, n, i, s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> n;
    s = 1;
    if (abs(a) <= 1000000 && n >= 1 && n <= 10000)
    {
        for (i = 0; i < n; i++)
        {
            s = s * a;
        }
    }
    cout << s << endl;
    return 0;
}