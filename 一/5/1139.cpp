#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    string s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[0] >= 'a' && s[0] <= 'z')
            s[0] = toupper(s[0]);
        for (int j = 1; j < s.size(); j++)
            if (s[j] >= 'A' && s[j] <= 'Z')
                s[j] = tolower(s[j]);
        cout << s << endl;
    }

    return 0;
}