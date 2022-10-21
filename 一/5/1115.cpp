#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, max = 0, j, a[10001] = {0};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> j;
        a[j]++;
        if (j > max)
            max = j;
    }
    for (int i = 0; i <= max; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}