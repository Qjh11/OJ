#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin>>n;
    int l=n.length();
    int a[l-1],i,j;
    j=atoi(n.c_str());
    for ( i = 0; i < l; i++)
    {
        a[i]=j%10;
        j=j/10;
        cout<<a[i]<<" ";
    }
    
    return 0;
}