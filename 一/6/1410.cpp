#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int m, n;
    vector<bool> p(5001);
    fill(p.begin(), p.end(), true);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n;
    for (int i = 2; i * i <= n; i++)
        for (int j = i + i; j <= n; j += i)
            if (p[j])
                p[j] = false;
    for (int i = m; i <= n; i++)
        for (int j = i; j >= 2; --j)
            if (i % j == 0 && p[j])
            {
                if (i == m)
                    cout << j;
                else
                    cout << ',' << j;
                break;
            }
    cout << endl;
    return 0;
}