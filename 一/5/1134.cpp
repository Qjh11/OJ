#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[0] >= '0' && s[0] <= '9')
        {
            cout << "no" << endl;
            return 0;
        }
        if (s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] == '_')
            continue;
        else
        {
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}