#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b, c, t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    cout << max(a, max(b, c)) << endl;

    return 0;
}