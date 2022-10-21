#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int k, a, i, s1, s2, s3;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> k;
    s1 = 0;
    s2 = 0;
    s3 = 0;
    if (k > 1 && k < 100)
    {
        for (i = 1; i <= k; i++)
        {
            cin >> a;
            if (a >= 1 && a <= 10)
            {
                if (a == 1)
                {
                    s1 += 1;
                }
                else if (a == 5)
                {
                    s2 += 1;
                }
                else if (a == 10)
                {
                    s3 += 1;
                }
            }
        }
    }
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    return 0;
}