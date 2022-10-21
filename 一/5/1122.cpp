#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a[6][6];
    bool l = false;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            cin >> a[i][j];
    for(int i = 1; i <= 5; ++i){
		int max = 1;
		for(int j = 1; j <= 5; ++j)
			if(a[i][j] > a[i][max])
				max = j;
		
		bool p = true;
		for(int k = 1; k <= 5; ++k)
			if(a[k][max] < a[i][max]){
				p = false;
				break;
			}
		if(p)
		{
			cout<<i<<' '<<max<<' '<<a[i][max]<<endl;
			l = true;
			break;
		}
	}
	if(l == false)
		cout<<"not found"<<endl;
    return 0;
}