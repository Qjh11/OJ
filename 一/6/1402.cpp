#include <bits/stdc++.h>
using namespace std;
#define ll long long
string k, c;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> k;
    cin >> c;
    for (int i = 0; i < k.size(); i++)
        k[i] = (char)(toupper(k[i]));
    for (int i = 0, j = 0; i < c.size(); i++)
    {
        if (isupper(c[i]))
        {
            c[i] -= k[j] - 'A';
            ++j;
            if (c[i] < 'A')
                c[i] = 'Z' - ('A' - c[i]) + 1;
        }
        else
        {
            c[i] -= k[j] - 'A';
            ++j;
            if (c[i] < 'a')
                c[i] = 'z' - ('a' - c[i]) + 1;
        }
        if (j >= k.size())
            j = 0;
    }
    cout << c << endl;
    return 0;
}