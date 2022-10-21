#include <bits/stdc++.h>
using namespace std;
#define ll long long
int commonDivisor(int m, int n ) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int max = 0,min = 0;
    int t = 0;
    if(m > n) {
        max = m;
        min = n;
    }else{
        max = n;
        min = m;
    }
    t = max % min;
    while(t != 0) {
        max = min;
        min = t;
        t = max % min;
    }
    return min;
}