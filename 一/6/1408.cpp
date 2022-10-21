#include <bits/stdc++.h>
using namespace std;
#define ll long long
int h(int n)
{
    int s = 0;
    while (n > 0)
    {
        s = s * 10 + n % 10;
        n /= 10;
    }
    return s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k = 0;
    vector<bool> p(1001);
    fill(p.begin(), p.end(), true);
    cin >> n;
    for (int i = 2; i * i <= n; i++)
        for (int j = i + i; j <= n; j += i)
            if (p[j])
                p[j] = false;
    for (int i = 11; i <= n; i++)
        if (p[i] && h(i) == i)
            ++k;
    cout << k << endl;
    return 0;
}