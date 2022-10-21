#include <bits/stdc++.h>
using namespace std;
#define ll long long
int f(int n)
{
    if (n == 1)
        return 1;
    return n+f(n-1);
}
int main()
{
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    cout << f(n) << endl;
    return 0;
}