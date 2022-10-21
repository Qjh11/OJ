#include <bits/stdc++.h>
using namespace std;
#define ll long long
char a[201][101];
int ma, mi, k = 0;
int main()
{
    string s, max, min;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin, s);
    for (int i = 0, j = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' || s[i] == ',' || s[i] == '\n')
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
    min = a[0];
    ma = strlen(a[0]);
    mi = strlen(a[0]);
    for (int i = 0; i <= k; i++)
    {
        if (strlen(a[i]) > ma)
        {
            ma = strlen(a[i]);
            max = a[i];
        }
        else if (strlen(a[i]) < mi && strlen(a[i])>0)
        {
            mi = strlen(a[i]);
            min = a[i];
        }
    }

    cout << max << endl;
    cout << min << endl;
    return 0;
}