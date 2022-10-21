#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int s = 0, i;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    do
    {
        ++s;
        if (s % 2 == 1 && s % 3 == 1 && s % 4 == 1 && s % 5 == 1 && s % 6 == 1 && s % 7 == 0)
        {
            cout << s << endl;
            i = 1;
            break;
        }
        i = 0;
    } while (i == 0);

    return 0;
}