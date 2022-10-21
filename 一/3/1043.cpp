#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    cin >> x >> y;
    if (x > y)
    {
        cout << ">" << endl;
    }
    else if (x == y)
    {
        cout << "=" << endl;
    }
    else
    {
        cout << "<" << endl;
    }

    return 0;
}