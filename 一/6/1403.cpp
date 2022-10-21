#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, k = 0;
    cin >> n;
    vector<bool> p(10001);
    fill(p.begin(), p.end(), true);
    for (int i = 2; i * i <= n; i++)
    {
        for (int j = i + i; j <= n; j += i)
        {
            if (p[j])
                p[j] = false;
        }
    }
    for (int i = 3; i+2 <= n; i++)
    {
        if (p[i] && p[i + 2])
        {
            k++;
            cout << i << " " << i + 2 << endl;
        }
    }
    if (k == 0)
        cout << "empty" << endl;
    return 0;
}