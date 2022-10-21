#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, x, k = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int a[n - 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << i + 1 << endl;
            ++k;
            break;
        }
    }
    if (k == 0)
    {

        cout << "-1" << endl;
    }

    return 0;
}