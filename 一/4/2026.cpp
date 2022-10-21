#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i, j, s = 0, a = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        a = 1;
        for (j = 1; j <= i; j++)
        {
            a *= j;
        }
        s += a;
    }
    cout << s << endl;
    return 0;
}