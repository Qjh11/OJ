#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, a, b, i;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> n;
    for (i = 0; i < n; i++)
    {
        a %= b;
        a *= 10;
    }
    a = a / b;
    cout << a << endl;
    return 0;
}