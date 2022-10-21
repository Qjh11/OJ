#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, a;
    double s = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        while (a > 70)
        {
            s += 0.1;
            a -= 70;
        }
        s += 0.1;
    }
    printf("%.1lf\n",s);
    return 0;
}