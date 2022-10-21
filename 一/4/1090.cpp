#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string m;
    int k, l, j, i = 0, s = 0, a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> k;
    l = m.length();
    j = atoi(m.c_str());
    while (i < l)
    {
        a = j % 10;
        j = j / 10;
        if (a == 3)
        {
            s += 1;
        }
        ++i;
    }
    if (j % 19 == 0 && s == k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}