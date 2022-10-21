#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while (n>1)
    {
        if (n % 2 != 0)
        {
            cout << n << "*3+1=" << n * 3 + 1 << endl;
            n = n * 3 + 1;
        }
        else if (n % 2 == 0)
        {
            cout << n << "/2=" << n / 2 << endl;
            n /= 2;
        }
    }
    cout << "End" << endl;

    return 0;
}