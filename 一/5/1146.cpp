#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s, t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    t = s;
    reverse(t.begin(), t.end());
    if (s == t)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}