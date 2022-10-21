#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] < 'z' || s[i] >= 'A' && s[i] <'Z')
            cout <<char(s[i] +1);
            else if(s[i]=='z')
            {s[i]='a';
            cout <<char(s[i]);}
            else if(s[i]=='Z'){
                s[i]='A';
            cout <<char(s[i]);}
        else
            cout << s[i];
    }
    cout << endl;
    return 0;
}