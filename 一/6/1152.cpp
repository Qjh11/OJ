#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{ 
    double m,a,b,c;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    printf("%.3lf\n",max({a,b,c})/max({a+b,b,c})/max({a,b,b+c}));
    return 0;
}