#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[21][21], n, c, x, y, k = 1;
    cin >> n;
    c = ceil((double)n/2);
    for(int i = 1; i <= c; i++)
    {
        for(x = i, y = n-i+1; x <= n-i+1; x++)
            a[x][y] = k++; 
        for(x = n-i+1, y = n-i; y >= i; y--)
            a[x][y] = k++; 
        for(x = n-i, y = i; x >= i; x--)
            a[x][y] = k++; 
        for(x = i, y = i+1; y <= n-i; y++)
            a[x][y] = k++; 
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}