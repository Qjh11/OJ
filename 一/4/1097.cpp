#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b, d;
    char c;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c >> d;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (d == 1)
            {
                cout << c;
                if (j == b)
                {
                    cout << endl;
                }
            }
            else if (d == 0)
            {
                if (i == 1 || i == a)
                {
                    cout << c;
                    if (j == b)
                    {
                        cout << endl;
                    }
                }
                else
                {
                    if (j == 1)
                    {
                        cout << c;
                    }
                    else if (j == b)
                    {
                        cout << c << endl;
                    }
                    else
                    {
                        cout << " ";
                    }
                }
            }
        }
    }

    return 0;
}