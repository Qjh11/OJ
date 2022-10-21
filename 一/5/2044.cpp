#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a, r;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;
    a.pop_back();
    r = a;
    reverse(r.begin(), r.end());
    cout << (a == r ? "Yes" : "No");
    return 0;
}