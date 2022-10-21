#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'A')
            cout << 'T';
        else if (a[i] == 'T')
            cout << 'A';
        else if (a[i] == 'G')
            cout << 'C';
        else if (a[i] == 'C')
            cout << 'G';
    }
    cout << endl;
    return 0;
}