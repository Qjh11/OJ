#include <bits/stdc++.h>
using namespace std;
#define ll long long
string a, b;
int x[201], y[201], c[202];
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(x, 0, sizeof x);
    memset(y, 0, sizeof y);
    memset(c, 0, sizeof c);
    cin >> a >> b;
    for (int i = a.size() - 1, j = 0; i >= 0; --i, j++)
        x[j] = a[i] - '0';
    for (int i = b.size() - 1, j = 0; i >= 0; --i, j++)
        y[j] = b[i] - '0';
    for (int i = 0, j = 201; i < a.size(); i++, --j)
    {
        c[j] += (x[i] - y[i]);
        if (c[j] < 0)
        {
            c[j - 1] -= 1;
            c[j] +=10;
        }
    }
    int k = 0;
    for (int i = 0; i<=201; ++i)
    {
        if (c[i] == 0 && k == 0)
            continue;
        else
        {
            ++k;
            cout << c[i];
        }
    }
    cout << endl;

    return 0;
}