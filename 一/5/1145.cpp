#include <string>
#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i + 1] == s[i])
        {
            a++;
            continue;
        }
        cout << a << s[i];
        a = 1;
    }
    return 0;
}