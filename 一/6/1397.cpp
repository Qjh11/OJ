#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a, b;
    char c;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a >> c >> b;
    if (c == '+')
        cout << a + b << endl;
    if (c == '-')
        cout << a - b << endl;
    if (c == '*')
        cout << a * b << endl;
    if (c == '/')
        cout << a / b << endl;
    if (c == '%')
        cout << a % b << endl;
    return 0;
}