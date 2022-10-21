#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b, c, s = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    for (int i = 0;i<1000; i++)
    {
        for (int j = 0;j<1000; j++)
        {
            if (a * i + b * j == c)
            {
                ++s;
            }
        }
    }
cout<<s<<endl;
    return 0;
}