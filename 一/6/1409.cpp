#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int x, y, k = 0;
    vector<bool> p(100001);
    fill(p.begin(), p.end(), true);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x >> y;
    for (int i = 2; i * i <= y; i++)
        for (int j = i + i; j <= y; j += i)
            if (p[j])
                p[j] = false;
    for (int i = x; i <= y; i++)
        if (p[i])
            ++k;
    cout << k << endl;
    return 0;
}