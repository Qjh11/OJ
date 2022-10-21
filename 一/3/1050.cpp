#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double a, b, w;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;
    b = a / 3 + 50;
    w = a / 1.2;
    if (b < w)
    {
        cout << "Bike" << endl;
    }
    else if (b == w)
    {
        cout << "all" << endl;
    }
    else
    {
        cout << "Walk" << endl;
    }

    return 0;
}