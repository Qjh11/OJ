#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> b;
    cout << ((a < 60) + (b < 60)) % 2;
    return 0;
}