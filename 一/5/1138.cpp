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
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = toupper(s[i]);
    for (int i = 0; i < s.size(); i++)
        cout << s[i];
    cout << endl;
    return 0;
}