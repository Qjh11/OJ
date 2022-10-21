#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ack(int a, int b)
{
    if (a == 0)
        return b + 1;
    if (a > 0 && b == 0)
        return ack(a - 1, 1);
    if (a > 0 && b > 0)
        return ack(a - 1, ack(a, b - 1));
        return 0;
}
int main()
{
    int m, n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n;
    cout << ack(m, n);
    return 0;
}