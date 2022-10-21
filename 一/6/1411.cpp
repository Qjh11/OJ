#include <bits/stdc++.h>
using namespace std;
#define ll long long
int all(int i)
{
    int s = 0;
    while (i > 0)
    {
        s = s * 10 + i % 10;
        i = i / 10;
    }
    return s;
}
int main()
{
    int m, n, k = 0;
    vector<bool> p(100001);
    fill(p.begin(), p.end(), true);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n;
    for (int i = 2; i * i <= 100001; i++)
        for (int j = i + i; j <= 100001; j += i)
            if (p[j])
                p[j] = false;
    for (int i = m; i <= n; i++)
        if (p[i] && p[all(i)])
        {
            ++k;
            if (k == 1)
                cout << i;
            else
                cout << ',' << i;
        }
    if (k == 0)
        cout << "No" << endl;
    return 0;
}