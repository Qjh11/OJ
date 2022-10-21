#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a[10];
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    sort(a, a + 10);
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}