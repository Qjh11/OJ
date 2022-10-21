#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s, s1;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == s.size() - 1)
        {
            s1 = s[i] + s[0];
            cout << s1;
        }
        else
        {
            s1 = s[i] + s[i + 1];
            cout << s1;
        }
    }
    cout << endl;
    return 0;
}