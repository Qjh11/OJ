#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a, b, c, d;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.size(); i++)
        if (a[i] != ' ')
            c += tolower(a[i]);
    for (int i = 0; i < b.size(); i++)
        if (b[i] != ' ')
            d += tolower(b[i]);
    cout << (c == d ? "YES" : "NO") << endl;
    return 0;
}