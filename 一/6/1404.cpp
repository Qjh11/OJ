#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, s = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1;; i++)
    {
        s += i;
        for (int j = 1; j <= i; j++)
        {
            if (s - 3 * j == n)
            {
                cout << j << " " << i << endl;
                return 0;
            }
        }
    }

    return 0;
}