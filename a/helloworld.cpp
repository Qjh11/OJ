#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<stdbool.h>
#include <iomanip>
//#include<bits/stdc++.h>
//#include<bits/stdc++.h>
//#include <cstdio>
using namespace std;
#define ll long long
int main(){
	int n,x,y,z;
	//float a,b,c,p,s;
	//long long a,b;
	//double a,b,c,max;
	//int a,b,c,t;
    //	bool b;
    //char a;
	//short b;
	//b=int(a);
	//z=a*0.2+b*0.3+c*0.5;
	//d=a%b;
	//z=(y*b-a*x)/(b-a);
	//	cout<<setw(5)<<a1<<setw(5)<<a2<<setw(5)<<a3<<setw(5)<<a4<<setw(5)<<a5;
	//printf("%5d %5d %5d %5d %5d",a1,a2,a3,a4,a5);
	//cout<<setiosflags(ios::fixed)<<setprecision(0)<<a;
	//	cout<<sizeof(a)<<" "<<sizeof(b);
	//printf("%.2lf",s);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> x >> y;
	printf("%d", max(n - y / x - (bool)(y % x), 0));
	return 0;
}