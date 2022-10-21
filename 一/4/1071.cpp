#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int k, i;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> k;
    int a[k];
    a[0] = 1;
    a[1] = 1;
    for (i = 2; i < k; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[k-1] << endl;
    return 0;
}