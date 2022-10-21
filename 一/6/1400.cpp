#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int c=-1, k = 0, j;
    string a, b;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < b.size(); i++)
    {
        for (j = 0; j < a.size(); j++)
        {
            if (toupper(b[i + j]) != toupper(a[j]))
                break;
            if (i > 0 && b[i - 1] != ' ')
                break;
        }
        if (j == a.size() && (b[i + j] == ' ' || j + i == b.size())) //若循环判定通过，且该单词词尾为文章尾或后有空格
        {
            ++k;
            if (k==1)
            c=i;
            
        }
    }

    if (k == 0)
        cout << c << endl;
    else
        cout << k << " " << c << endl;

    return 0;
}