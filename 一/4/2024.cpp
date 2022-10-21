#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, s = 1, i = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    do
    {
        s=s*1992;
        s=s%100;
        ++i;
        
    } while (i < n);
    cout << s % 100 << endl;
    return 0;
}