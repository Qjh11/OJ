#include <bits/stdc++.h>
using namespace std;
#define ll long long
char z[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
int jz(int n, int k)
{
    int s;
    s = n % k;
    n = n / k;
    if (n != 0)
        jz(n, k);
    cout << z[s];
    return 0;
}
int main()
{
    int x, m;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x >> m;
    jz(x, m);
    cout << endl;
    return 0;
}