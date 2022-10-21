#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,max=0,b=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int a[n - 1], t;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j]>max)
        {
            max=a[j];
            b=j+1;
        }
        
    }
    cout<<b<<endl;
    return 0;
}