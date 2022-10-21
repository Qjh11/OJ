#include <bits/stdc++.h>
using namespace std;
#define ll long long
int b[27];
int main()
{
    string a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;
    for (int i = 0; i < a.size(); i++)
        b[a[i] - 'a']++;
    for (int i = 0; i < a.size(); i++)
        if (b[a[i] - 'a'] == 1)
        {
            cout << a[i] << endl;
            return 0;
        }
    cout << "no" << endl;
    return 0;
}