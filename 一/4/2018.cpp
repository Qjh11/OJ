#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i, s1, s2;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    s1=0;
    s2=0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s1 += i;
        }
        else
        {
            s2 += i;
        }
    }
    cout << s1 << " " << s2 << endl;
    return 0;
}