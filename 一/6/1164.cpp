#include <bits/stdc++.h>
using namespace std;
#define ll long long
int digit(int a, int b)
{
    if (b == 1)
        return a % 10;
    b = b - 1;
    a = a / 10;
    return digit(a, b);
}
int main()
{
    int n, k;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    cout << digit(n, k);
    cout << endl;
    return 0;
}