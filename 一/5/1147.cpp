#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, a[101], max = 0;
    string b, c;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b;
        if (a[i] > max)
        {
            max = a[i];
            c = b;
        }
    }
    cout << c << endl;
    return 0;
}