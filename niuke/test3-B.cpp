#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double a, b, c, area, p, s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    if (a + b > c)
        printf("%.1lf %.1lf\n", (a + b + c), sqrt(s * (s - a) * (s - b) * (s - c)));
    else
        cout << "These sides do not correspond to a valid triangle!" << endl;

    return 0;
}