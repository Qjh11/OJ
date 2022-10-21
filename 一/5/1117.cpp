#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, a[20001] = {0};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] == a[j])
                a[j] = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != 0)
            cout << a[i] << " ";
    return 0;
}