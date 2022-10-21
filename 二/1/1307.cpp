#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 209;
char x[maxn], y[maxn];
int a[maxn], b[maxn], c[2 * maxn];
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> x >> y;
    int len1 = strlen(x), len2 = strlen(y);
    memset(a, 0, sizeof a);
    memset(b, 0, sizeof b);
    memset(c, 0, sizeof c);
    for (int i = len1 - 1, j = 0; i >= 0; i--, j++)
        a[j] = x[i] - '0';
    for (int i = len2 - 1, j = 0; i >= 0; i--, j++)
        b[j] = y[i] - '0';
    for (int i = 0; i < len1; i++)
        for (int j = 0; j < len2; j++)
            c[i + j] += a[i] * b[j];
    int i;
    for (i = 0; i < 2 * maxn; i++)
    {
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    while (c[i] == 0)
        i--;
    if (i < 0)
        cout << "0";
    for (; i >= 0; i--)
        cout << c[i];
    cout << endl;

    return 0;
}