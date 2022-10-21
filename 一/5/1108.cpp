#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,s=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int a[n-1],b[n-1];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        s+=(a[i]*b[i]);
    }
    cout<<s<<endl;
    
    return 0;
}