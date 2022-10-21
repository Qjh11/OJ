#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b, j, i,s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b;
    for (i = a; i <= b; i++)
    {
        s=0;
        for (j = 2; j < i; j++)
        {
            if (i%j==0)
            {
                s+=1;
            }
        }
        if (s==0)
        {
            cout<<i<<endl;
        }
        
    }

    return 0;
}