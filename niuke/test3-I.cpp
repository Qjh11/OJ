#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a[101], n, i;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for (i = i - 1; i >= 0; i--)
        cout << a[i];
    cout << endl;
    return 0;
}