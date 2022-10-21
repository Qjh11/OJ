#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i, j;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
            if (j == i)
            {
                cout << endl;
            }
        }
    }

    return 0;
}