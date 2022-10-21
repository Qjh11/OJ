#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i, a, b, h = 0, max = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &a, &b);
        if (a >= 90 && a <= 140 && b >= 60 && b <= 90)
        {
            h++;
            if (h > max)
                max = h;
        }
        else
            h = 0;
    }
    cout << max << endl;
    return 0;
}