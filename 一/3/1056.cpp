#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int x, y;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x >> y;
    if (x >= -1 && x <= 1 && y >= -1 && y <= 1)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}