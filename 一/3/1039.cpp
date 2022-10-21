#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stdbool.h>
#include <iomanip>
//#include<bits/stdc++.h>
//#include <cstdio>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n > 0)
    {
        cout << "positive" << endl;
    }
    else if (n == 0)
    {
        cout << "zero" << endl;
    }
    else
    {
        cout << "negative" << endl;
    }
}