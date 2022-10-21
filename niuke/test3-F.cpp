#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, l, s = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    n = abs(n);
    l = 1 + log10(n);
    for (int i = 1; i <= l; i++)
    {
        s += (n % 10);
        n /= 10;
    }

    cout << "number=" << l << ",sum=" << s << endl;
    return 0;
}