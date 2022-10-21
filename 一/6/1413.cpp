#include<bits/stdc++.h>
using namespace std;
int p,q,r;
int check(int n,int b)
{
	int sum=1,sum1=0;
	while(n>0)
	{
		if(n%10>=b)return 999999999;
		sum1+=n%10*sum;
		sum*=b;
		n/=10;
	}
	return sum1;
}
int main()
{
	cin>>p>>q>>r;
	for(int i=2;i<=40;i++)
	{
		if(check(p,i)*check(q,i)==check(r,i))
		{
			cout<<i;
			return 0;
		}
	}
	cout<<0;
	return 0;
}
