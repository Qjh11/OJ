#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n > 0)
    {
        if (n % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }
    return 0;
}