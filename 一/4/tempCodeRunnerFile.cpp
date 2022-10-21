#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int l = n.length();
    int a[l - 1], i = 0, j, s = 0, x = 1, y;
    j = atoi(n.c_str());
    y=j;
    if (j<0)
    {
       j=abs(j);
    }
    while (i < l)
    {if (j<=0)
    {
        break;
    }
        a[i] = j % 10;
        j = j / 10;
        ++i;
        x = x * 10;
    }
    x = x / 10;
    for (int b = 0; b < l; b++)
    {
        s = s + (a[b] * x);
        x = x / 10;
    }
    if (y < 0)
    {
        s = -s;
        cout << s << endl;
    }
    else
    {
        cout << s << endl;
    }

    return 0;
}