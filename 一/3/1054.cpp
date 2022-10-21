#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b, c;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b >> c;
    if ((a + b) > c && (a + c) > b && (b + c) > a)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}