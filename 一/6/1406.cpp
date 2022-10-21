#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
string str[101], a, b;
int main()
{
    int n = 0;
    int i;
    char s;
    do
    {
        n++;
        cin >> str[n];
        scanf("%c", &s);
    } while (s == ' ');
    cin >> a >> b;
    for (i = 1; i <= n; i++)
        if (a == str[i])
            cout << b << " ";
        else
            cout << str[i] << " ";
    cout << endl;
    return 0;
}
