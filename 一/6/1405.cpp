#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int s, x, max = 0;
    vector<bool> p(10001);
    fill(p.begin(), p.end(), true);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    for (int i = 2; i * i <= s; i++)
        for (int j = i + i; j <= s; j += i)
            if (p[j])
                p[j] = false;

    for (int i = s / 2; i <= s; ++i)
        if (p[i] && p[s - i])
        {
            cout << i * (s - i) << endl;
            return 0;
        }
    return 0;
}