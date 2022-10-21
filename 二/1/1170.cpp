#include <iostream>
#include <cstring>
#define N 50
using namespace std;
int a[N], n, l = 1;
int main()
{
    cin >> n;
    a[0] = 1;
    while (n--)
    {
        for (int i = 0; i < l; i++)
            a[i] *= 2;
        for (int i = 0; i < l; i++)
        {
            if (a[i] > 9)
            {
                a[i + 1]++;
                a[i] -= 10;
                if (i == l - 1)
                    l++;
            }
        }
    }
    for (int i = l - 1; i >= 0; i--)
        cout << a[i];
    cout << endl;
}