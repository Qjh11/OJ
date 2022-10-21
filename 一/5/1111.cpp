#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a[6], x, y, max = 0, l;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 7; i++)
    {
        cin >> x >> y;
        a[i] = x + y;
        if (a[i] > max)
        {
            max = a[i];
            l = i + 1;
        }
    }
cout<<l<<endl;
    return 0;
}