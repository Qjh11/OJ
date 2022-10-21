#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;
        if (a % 5 == 0 && a % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    return 0;
}