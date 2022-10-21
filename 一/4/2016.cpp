#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i, n,s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    s=0;
    for (i = 0; i <= n; i++)
    {
        s += i;
    }
    cout << s << endl;
    return 0;
}