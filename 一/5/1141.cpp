#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin, s);
    int len = s.size();
    if ((s[len - 2] == 'e' && s[len - 1] == 'r') || (s[len - 2] == 'l' && s[len - 1] == 'y'))
    {
        for (int i = 0; i < len - 2; i++)
            cout << s[i];
    }
    else if (s[len - 3] == 'i' && s[len - 2] == 'n' && s[len - 1] == 'g')
    {
        for (int i = 0; i < len - 3; i++)
            cout << s[i];
    }
    else
        cout << s << endl;

    return 0;
}