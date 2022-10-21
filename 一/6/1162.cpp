#include <bits/stdc++.h>
using namespace std;
#define ll long long
char s[101];
int zf(int x)
{
    int z;
    z = x - 1;
    if (z < 0)
        return 0;
    cout << s[z];
    return zf(z);
}
int main()
{
    int i, n;
    i = 0;
    do
    {
        scanf("%c", &s[i]);
        i++;
    } while (s[i - 1] != '!');
    s[i - 1] = '\0';
    n = strlen(s);
    zf(n);
    cout << endl;
    return 0;
}