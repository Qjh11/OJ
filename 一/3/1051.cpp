#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    float x, y;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x;
    if (x >= 0 && x < 5)
    {
        y = -x + 2.5;
    }
    else if (x >= 5 && x < 10)
    {
        y = 2 - 1.5 * (x - 3) * (x - 3);
    }
    else if (x >= 10 && x < 20)
    {
        y = x / 2 - 1.5;
    }
    printf("%.3f\n", y);

    return 0;
}