#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    char a[201];
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.getline(a, 201);
    int l = strlen(a);
    for (int i = 0; i < l; i++)
        if (a[i + 1] != ' ' || a[i] != ' ')
            cout << a[i];
    cout << endl;
    return 0;
}