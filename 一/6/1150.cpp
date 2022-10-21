#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        s = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
                s += j;
        }
        if (s == i)
            cout << i <<endl;
    }
    return 0;
}