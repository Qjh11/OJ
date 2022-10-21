#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n = 0, m, s=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m;
    while (s <= m)
    {
        ++n;
        s += n;
    }
    cout << n << endl;
    return 0;
}