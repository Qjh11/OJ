#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i = 1, s = 0, a = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while (i <= n)
    {
        a *= i;
        s += a;
        ++i;
    }
    cout << s << endl;
    return 0;
}