#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n = 999, gw, sw, bw;
    vector<bool> p(n + 1);
    fill(p.begin(), p.end(), true);
    for (int i = 2; i * i <= n; i++)
    {
        for (int j = i + i; j <= n; j += i)
        {
            if (p[j])
                p[j] = false;
        }
    }

    for (int i = 100; i <= n; i++)
    {
        gw = i % 10;
        sw = (i / 10) % 10;
        bw = i / 100;
        if (p[i] && i == (bw + sw * 10 + gw * 100))
            cout << i << endl;
    }
}