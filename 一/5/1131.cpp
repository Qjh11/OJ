#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a, b;
    double l, n, c = 0;
    scanf("%lf\n", &l);
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.size(); i++)
        if (a[i] == b[i])
            ++c;

    n = a.size();
    c /= n;
    cout << (c > l ? "yes" : "no") << endl;

    return 0;
}