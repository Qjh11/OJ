#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m,k=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int a[n-1];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==m)
        {
            ++k;
        }
    }
    cout<<k<<endl;
    return 0;
}