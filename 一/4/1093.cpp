#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double x,s=0,a;
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>n;
    for (int i = n; i >=0; --i)
    {
        a=pow(x,i);
        s+=a;
    }
    printf("%.2lf\n",s);
    return 0;
}