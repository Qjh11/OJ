#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int max = -10001, min = 10001, m;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m;
    int a[10001];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        if (a[i] > max)
            max = a[i];
        else if (a[i] < min)
            min = a[i];
    }
    cout << max - min << endl;
    return 0;
}