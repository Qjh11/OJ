#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a, b;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b;
    if (a.size() < b.size())
        swap(a, b);
    a += a;
    cout << (a.find(b) == -1 ? "false" : "true") << endl;
    return 0;
}