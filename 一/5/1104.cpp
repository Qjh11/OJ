#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    float s = 0;
    double a[10] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int b[9];
    for (int i = 0; i < 10; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < 10; i++)
    {
        s += (a[i] * (b[i] * 1.0));
    }
    printf("%.1f\n", s);

    return 0;
}