#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a[100],i=0,x;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while (cin>>x)
        a[i++]=x;
        i--;
    for (; i>=0; i--)
        cout<<a[i]<<" ";
    
    
    return 0;
}