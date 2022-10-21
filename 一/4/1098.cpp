#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            printf("%d\n", n / i);

    return 0;
}