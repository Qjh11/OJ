#include <bits/stdc++.h>
//#include <cstdio>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float a;
    cin >> a;
    if (fabs(a) <= 10000)
    {
        printf("%.2f\n", fabs(a));
    }

    return 0;
}