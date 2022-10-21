#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int max=-1000000,n,a[100001],s=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
   for (int i = 0; i < n; i++)
   {
    cin>>a[i];
    if (a[i]>max)
    {
        max=a[i];
    }
   }
   for (int i = 0; i < n; i++)
   {
    if (a[i]!=max)
    {
       s+=a[i];
    }
   }
   cout<<s<<endl;
    
    return 0;
}