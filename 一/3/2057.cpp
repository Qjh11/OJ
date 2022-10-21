#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;
    if (a == 1)
    {
        cout << "Monday" << endl;
    }
    else if (a == 2)
    {
        cout << "Tuesday" << endl;
    }
    else if (a == 3)
    {
        cout << "Wednesday" << endl;
    }
    else if (a == 4)
    {
        cout << "Thursday" << endl;
    }
    else if (a == 5)
    {
        cout << "Friday" << endl;
    }
    else if (a == 6)
    {
        cout << "Saturday" << endl;
    }
    else if (a == 7)
    {
        cout << "Sunday" << endl;
    }
    else
    {
        cout << "input error!" << endl;
    }

    return 0;
}