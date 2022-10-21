#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b, x = 0, y = 0, k;
    for (int i = 1; i <= 1000; i++)
    {
        a = 0;
        b = 0;
        k = i;
        while (k > 0)
        {
            if (k % 2 == 1)
                a++;
            else
                ++b;
            k = k / 2;
        }
        if (a > b)
            x++;
        else
            ++y;
    }
    cout << x << " " << y << endl;
    return 0;
}