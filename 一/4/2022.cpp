#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int m,i;
    double s=0,n=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m;
    while (s<m)
    {
        ++n;
        s+=1/n;
    }
    cout<<n<<endl;
    return 0;
}