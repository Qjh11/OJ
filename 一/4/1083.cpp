#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b, d = 1;
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        d = d * a;
        d %= 7;
    }

    switch (d)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 0:
        cout << "Sunday" << endl;
        break;
    default:
        break;
    }
}