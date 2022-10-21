#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int l,m,k=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>l>>m;
    int a[l],x,y;
    for (int i = 0; i <=l; i++)
    {
        a[i]=1;
    }
    for (int i = 0; i < m; i++)
    {
        cin>>x>>y;
        for (int j = x; j <=y; j++)
        {
           a[j]=0;
        }
    }
    for (int i = 0; i <=l ; i++)
    {
        if (a[i]==0)
        {
           ++k;
        }
        
    }
    
    cout<<l-k+1<<endl;
    return 0;
}