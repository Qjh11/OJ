#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s, max;
    int k = 0, ma = 0;
    char a[201][101];
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin, s);
    for (int i = 0, j = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' || s[i] == '.')
        {
            ++k;
            j = 0;
        }
        else
        {
            a[k][j] = s[i];
            ++j;
        }
    }
    max = a[0];
    ma = strlen(a[0]);
    for (int i = 0; i <= k; i++)
    {
        if (strlen(a[i]) > ma)
        {
            ma = strlen(a[i]);
            max = a[i];
        }
    }
    cout << max << endl;
    return 0;
}