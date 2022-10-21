#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a[9],h,k=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    cin>>h;
    h+=30;
    for (int i = 0; i < 10; i++)
    {
        if (a[i]<=h)
        {
            ++k;
        }
    }
    cout<<k<<endl;
    return 0;
}