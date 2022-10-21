#include <bits/stdc++.h>
using namespace std;
int n,mni,mxi;
double a[305],mn=10000,mx=-10000,sum=0,ave=0,dmax=0;
int main(){
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
		if(a[i]>mx){
			mx=a[i];
			mxi=i;
		}
		if(a[i]<mn){
			mn=a[i];
			mni=i;
		}
	}
	for(int i=0;i<n;++i)
	   sum+=a[i];
	ave=(sum-mx-mn)/(n-2);
	for(int i=0;i<n;++i)
		if(i!=mxi && i!=mni && fabs(a[i]-ave)>dmax)
			dmax=fabs(a[i]-ave);
            printf("%.2lf %.2lf\n",ave,dmax);
	return 0;
}