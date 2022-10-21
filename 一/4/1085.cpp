#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i;
    double h, s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> h;
    s = h;
    h = h / 2;
    for (i = 1; i < 10; i++)
    {
        s = s + (h * 2);
        h = h / 2;
    }
    cout << s << endl;
    cout << h << endl;
    return 0;
}