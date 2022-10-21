#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    char a[201], b, c;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.getline(a, 201);
    cin >> b >> c;
    int l = strlen(a);
    for (int i = 0; i < l; i++)
    {
        if (a[i] == b)
            a[i] = c;
    }
    cout << a << endl;
    return 0;
}