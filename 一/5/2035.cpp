#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int a[n - 1], t;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << a[0] << " " << endl;
        }
        else
        {
            cout << a[i + 1] << " ";
        }
    }

    return 0;
}