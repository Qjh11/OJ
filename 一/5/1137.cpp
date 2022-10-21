#include <bits/stdc++.h>
using namespace std;
#define ll long long
char a[51], b[51];
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.getline(a, 51);
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            if (a[i] == 'z')
                b[i] = 'c';
            else if (a[i] == 'y')
                b[i] = 'b';
            else if (a[i] == 'x')
                b[i] = 'a';
            else
                b[i] = a[i] + 3;
            b[i] = toupper(b[i]);
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            if (a[i] == 'Z')
                b[i] = 'C';
            else if (a[i] == 'Y')
                b[i] = 'B';
            else if (a[i] == 'X')
                b[i] = 'A';
            else
                b[i] = a[i] + 3;
            b[i] = tolower(b[i]);
        }
    }
    for (int i = strlen(b) - 1; i >= 0; --i)
    {
        cout << b[i];
    }

    cout << endl;
    return 0;
}