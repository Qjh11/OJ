#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    bool flag=false;
    while(cin>>s){
        if(flag)cout<<',';
        cout<<s.size();
        flag=true;
    }
    return 0;
}