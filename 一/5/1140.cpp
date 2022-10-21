#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a, b, d;
    bool c = false;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin, a);
    getline(cin, b);
    if (a.size() < b.size())
        swap(a, b);
    d = a + a;
    cout << (d.find(b) == -1 ? "No substring" : b + " is substring of " + a) << endl;
    return 0;
}