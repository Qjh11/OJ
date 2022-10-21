#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int a[n - 1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
for (int i = n-1; i >=0; --i)
{
    cout<<a[i]<<" ";
}

    return 0;
}