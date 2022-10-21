#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;
    if (a < 1000)
    {
        if (a >= 10 && a <= 99)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}