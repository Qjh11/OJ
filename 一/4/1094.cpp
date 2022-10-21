#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,x,s=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        if(i%10==7||i/10==7||i%7==0){
            continue;
        }
        else{
            x=pow(i,2);
            s+=x;
        }
    }
    cout<<s<<endl;
    return 0;
}