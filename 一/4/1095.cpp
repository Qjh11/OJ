#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, x = 0, a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a = i;
        while (a != 0)
        {
            if (a % 10 == 1)
            {
                ++x;
            }
            a /= 10;
        }
    }
    cout << x << endl;
    return 0;
}