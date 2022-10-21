#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int k, n = 1;
    string s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> k;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i + 1] == s[i])
            ++n;
        else
        {
            if (n >= k)
            {
                cout << s[i] << endl;
                return 0;
            }
            else
            {
                n = 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}