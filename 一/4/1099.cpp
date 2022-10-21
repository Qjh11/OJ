#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i=1, j, m = 0, l;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while (m<n)
    {
    ++i;
    l=1;
        for (int j = 2; j*j <=i; j++)
        {
            if (i % j == 0)
            {
                l=0;
            }
        }
        if (l == 1)
        {
            ++m;
        }
    }
    cout<<i<<endl;
    return 0;
}