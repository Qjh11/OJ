#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, t;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    int a[n - 1];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] < a[j + 1])
            {

                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
for (int i = 0; i < n; i++)
{
   cout<<a[i]<<endl;
}

    return 0;
}