#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i;
    double s = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            s = s - (1 / double(i));
        }
        else
        {
            s = s + (1 / double(i));
        }
    }
    printf("%.4lf\n", s);
    return 0;
}