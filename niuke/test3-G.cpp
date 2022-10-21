#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, n, s = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> n;
    while (n--)
    {
        if (n > 0)
            cout << a << "+";
        else
            cout << a << "=";
            s += a;
        a = a * 10 + a % 10;
        
        
    }
cout<<s<<endl;
    return 0;
}