#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i, s, qw, bw, sw, gw, z = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> s;
        qw = s / 1000;
        bw = (s % 1000) / 100;
        sw = (s % 100) / 10;
        gw = s % 10;
        if (gw - qw - bw - sw > 0)
        {
            z++;
        }
    }
    cout << z << endl;

    return 0;
}