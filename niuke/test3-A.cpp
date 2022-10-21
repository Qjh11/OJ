#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int score;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>score;
    if (score>=90)
    cout<<"A"<<endl;
    else if(score >=80)
    cout<<"B"<<endl;
    else if(score >=70)
    cout<<"C"<<endl;
    else if(score >=60)
    cout<<"D"<<endl;
    else
    cout<<"E"<<endl;
    return 0;
}