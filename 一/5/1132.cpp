#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    string s1, s2, a;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s1 >> s2;
        if (s1 == "Rock" && s2 == "Scissors"||s1 == "Paper" && s2 == "Rock"||s1 == "Scissors" && s2 == "Paper")
            a = "Player1";
        if (s1 == "Scissors" && s2 == "Rock"||s1 == "Rock" && s2 == "Paper"||s1 == "Paper" && s2 == "Scissors")
            a = "Player2";
        if (s1 == s2)
            a = "Tie";
        cout << a << endl;
    }

    return 0;
}