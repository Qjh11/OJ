#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    double s = 0;
    int n, k;
    cin>>k;
    for(n = 1; s <= k; ++n)
        s += 1.0 / n;
    cout<<n - 1<<endl;
    return 0;
}