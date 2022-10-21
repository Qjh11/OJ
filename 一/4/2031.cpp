#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i, gw, bw, qw, ww, x;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (i = 1000; i <= 9999; i++)
    {
        gw = i % 10;
        bw = (i / 10) % 10;
        qw = (i / 100) % 10;
        ww = i / 1000;
        if (ww == qw && bw == gw)
        {
            x = sqrt(i);
            if (x * x == i)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}