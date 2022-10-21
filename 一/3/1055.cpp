#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int y;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> y;
    if (y > 0 && y < 3000)
    {
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
        {
            cout << "Y" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }

    return 0;
}