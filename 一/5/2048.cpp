#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s[21];
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    sort(s, s + n);
    for (int i = 0; i < n; i++)
        cout << s[i] << endl;

    return 0;
}