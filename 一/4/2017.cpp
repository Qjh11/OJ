#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i, n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}