#include <bits/stdc++.h>
using namespace std;
#define ll long long
int b[1000001];
int main()
{
    int m, n, a, c = 0, k = 0;
    bool x;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> m >> n;
    memset(b,-1,sizeof b);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        x = false;
        for (int j = 0; j < m && b[j]!=-1; j++)
            if (b[j] == a)
                x = true;
        if (x == false)
        {
            if (c == m)
                c = 0;
            k++;
            b[c] = a;
            c++;
        }
    }
    cout << k << endl;
    return 0;
}