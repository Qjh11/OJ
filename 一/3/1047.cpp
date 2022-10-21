#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;
    if (a % 5 == 0 && a % 3 == 0 && a % 7 == 0)
    {
        cout << "3 5 7" << endl;
    }
    else if (a % 5 == 0 && a % 3 == 0)
    {
        cout << "3 5" << endl;
    }
    else if (a % 3 == 0 && a % 7 == 0)
    {
        cout << "3 7" << endl;
    }
    else if (a % 7 == 0 && a % 5 == 0)
    {
        cout << "5 7" << endl;
    }
    else if (a % 3 == 0)
    {
        cout << "3" << endl;
    }
    else if (a % 5 == 0)

    {
        cout << "5" << endl;
    }
    else if (a % 7 == 0)
    {
        cout << "7" << endl;
    }
    else
    {
        cout << "n" << endl;
    }
    return 0;
}