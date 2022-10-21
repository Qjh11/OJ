#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a;
    int n = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,a);
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
            ++n;
    }
    cout << n << endl;
    return 0;
}