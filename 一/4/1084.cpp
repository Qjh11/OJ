#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b, i, s = 1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b;
    for (i = 1; i <= b; i++)
    {
        s *= a;
        s %= 1000;
    }
    if (s > 100)
    {
        cout << s << endl;
    }
    else if (s > 10)
    {
        cout << "0" << s << endl;
    }
    else
    {
        cout << "00" << s << endl;
    }

    return 0;
}