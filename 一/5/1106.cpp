#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    double p1=0,p2=0,p3=0,p4=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int a[n-1];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]>=0&&a[i]<=18)
        {
            p1+=1;
        }else if (a[i]>=19&&a[i]<=35)
        {
            p2+=1;
        }else if (a[i]>=36&&a[i]<=60)
        {
            p3+=1;
        }else if (a[i]>=61)
        {
            p4+=1;
        }
    }
    p1=p1/(n*1.0);
    p2=p2/(n*1.0);
    p3=p3/(n*1.0);
    p4=p4/(n*1.0);
    printf("%.2lf%%\n%.2lf%%\n%.2lf%%\n%.2lf%%\n",p1*100,p2*100,p3*100,p4*100);
  
    return 0;
}