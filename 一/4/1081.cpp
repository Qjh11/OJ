#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,i,s=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        s+=i;
    }
    cout<<s<<endl;
    return 0;
}