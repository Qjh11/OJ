#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a[101], b[101], n = 100, k = 0, o = 0;
    vector<bool> p(n + 1);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fill(p.begin(), p.end(), true);
    for (int i = 2; i * i <= n; i++)
    {
        for (int j = i + i; j <= n; j += i)
        {
            if (p[j])
                p[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (p[i])
        {
            a[k] = i;
            ++k;
        }
    }
    for (int i = 6; i <= n; i += 2)
    {
        for (int j = 0; j <= k; j++)
        {

            if (p[a[j]] && p[i - a[j]])
            {
                cout << i << "=" << a[j] << "+" << i - a[j] << endl;
                break;
            }
        }
    }

    return 0;
}