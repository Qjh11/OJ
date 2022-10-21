#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,a[100][100]={};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {if(j==1)
        a[i][j]=1;
        else
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}