#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i,qw,bw,gw;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for ( i = 100; i <=999; i++)
    {
        gw=i%10;
        bw=(i/10)%10;
        qw=i/100;
       if (pow(gw,3)+pow(bw,3)+pow(qw,3)==i)
       {
        cout<<i<<endl;
       }
       
    }
    
    return 0;
}