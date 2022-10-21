#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    char n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    switch (n)
    {
    case 'A':
        cout << "90-100" << endl;
        break;
    case 'B':
        cout << "80-89" << endl;
        break;
    case 'C':
        cout << "70-79" << endl;
        break;
    case 'D':
        cout << "60-69" << endl;
        break;
    case 'E':
        cout << "0-59" << endl;
        break;
    default:
        cout << "Invalid input" << endl;
        break;
    }

    return 0;
}