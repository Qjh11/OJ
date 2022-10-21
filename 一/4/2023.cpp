#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, sum = 0, n = 0, max = 0, min = 1001;
    while (cin >> a)
    {
        if (a > max)
            max = a;
        if (a < min)
            min = a;
        sum += a;
        n++;
    }
    cout << min << ' ' << max << ' ';
    cout << fixed << setprecision(3) << (double)sum / n;
    return 0;
}