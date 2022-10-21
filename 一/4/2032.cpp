#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, i = 2;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    cout << n << "=";
    while (n > 1)
    {
        if (n % i == 0)
        {
            n = n / i;
            if (n != 1)
            {
                cout << i << "*";
            }
            else if(n==1)
            {
                cout << i<<endl;
            }
        }
        else
        {
            i++;
        }
    }

    return 0;
}