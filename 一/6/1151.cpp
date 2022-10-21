#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m;
    cin >> n;
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
    m = 0;
    for (int i = 2; i <= n; i++)
        if (p[i])
            m++;
    cout << m << endl;
}