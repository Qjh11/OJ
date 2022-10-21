#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, c[201] = {0}, k = 0;
    float b[201] = {0};
    char a[201][9];
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i];
    for (int i = 0; i < n; i++)
    {
        if (b[i] >= 37.5 && c[i] == 1)
        {
            ++k;
            cout << a[i] << endl;
        }
    }
    cout << k << endl;
    return 0;
}