#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, c;
    char b;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b;
    if (a <= 1000 && a > 0)
    {
        if (b == 'n')
        {
            c = 8;
        }
        else
        {
            c = 13;
        }
    }
    else
    {
        if (b == 'n')
        {
            if ((a - 1000) % 500 == 0)
            {
                c = 8 + ((a - 1000) / 500) * 4;
            }
            else
            {
                c = 8 + ((a - 1000) / 500) * 4 + 4;
            }
        }
        else
        {
            if ((a - 1000) % 500 == 0)
            {
                c = 8 + ((a - 1000) / 500) * 4 + 5;
            }
            else
            {
                c = 8 + ((a - 1000) / 500) * 4 + 9;
            }
        }
    }
    cout << c << endl;
    return 0;
}