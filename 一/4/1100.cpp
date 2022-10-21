#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,i=0,s=0,a=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while (a<n)
    {
        ++i;
        for (int j = 1; j <=i; j++)
        {
            s+=i;
            ++a;
            if (a==n)
            {
                cout<<s<<endl;
                break;
            }
            
        }
    }
    return 0;
}