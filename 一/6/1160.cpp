#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n(int a)
{
    int i;
    for (i = 10; a / i >= 10; i *= 10)
    {
    }
    return i;
}
int dx(int a)
{
    if (a < 10)
        return a;
    else
        return (a % 10) * n(a) + dx(a / 10);
}
int main()
{
    int a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;
    cout << dx(a) << endl;
    return 0;
}