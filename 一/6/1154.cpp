#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int s2, a;
    for (int i = 2; i <= 10000; i++)
    {
        int b = 0;
        s2 = 0;
        for (int j = 1; j < i; j++)
            if (i % j == 0)
                b += j;
        a = i;
        for (int k = 1; k < b; k++)
        {
            if (b % k == 0)
                s2 += k;
        }
        if (a == s2 && a != b)
        {
            cout << a << " " << b << endl;
            break;
        }
    }

    return 0;
}