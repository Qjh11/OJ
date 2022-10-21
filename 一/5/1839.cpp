#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, avg[101], bj[101], lw[101], m[101]={0}, max = -1, s = 0;
    string name[101], people;
    char xibu[101], ganbu[101];
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> name[i] >> avg[i] >> bj[i] >> ganbu[i] >> xibu[i] >> lw[i];
        if (avg[i] > 80 && lw[i] >= 1)
            m[i] += 8000;
        if (avg[i] > 85 && bj[i] > 80)
            m[i] += 4000;
        if (avg[i] > 90)
            m[i] += 2000;
        if (avg[i] > 85 && xibu[i] == 'Y')
            m[i] += 1000;
        if (bj[i] > 80 && ganbu[i] == 'Y')
            m[i] += 850;
        if (m[i] > max)
        {
            max = m[i];
            people = name[i];
        }
        s += m[i];
    }

    cout << people << endl;
    cout << max << endl;
    cout << s << endl;
    return 0;
}