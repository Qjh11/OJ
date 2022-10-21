#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a, b;
	cin>>n;
	cin>>a>>b;
	double x = (double)b / a, y;
	for(int i = 1; i < n; ++i)
	{
		cin>>a>>b;
		y = (double)b / a;
		if(y - x > 0.05)
			cout<<"better"<<endl;
		else if(x - y > 0.05)
			cout<<"worse"<<endl;
		else
			cout<<"same"<<endl;
	}
	return 0;
}