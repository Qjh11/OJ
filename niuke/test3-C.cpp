#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "[1]apples,price=3.0" << endl;
        break;
    case 2:
        cout << "[2]pears,price=2.5" << endl;
        break;
    case 3:
        cout << "[3]oranges,price=4.10" << endl;
        break;
    case 4:
        cout << "[4]grapes,price=10.20" << endl;
        break;
    default:
        break;
    }

    return 0;
}