#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int i, j, k;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (i = 0; i <= 20; i++)
    {
        for (j = 0; j <= 33; j++)
        {
            for (k = 0; k <= 99; k += 3)
            {
                if (i + j + k == 100 && i * 5 + j * 3 + k/3 == 100)
                {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }

    return 0;
}