//3*sum-x-y=sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,sum=0,n;
	cin>>x>>y>>n;
	sum=x+y;
	for(int i=1;i<=n;i++)
	  sum=sum*3-x-y;
	cout<<sum<<endl;
	return 0;
}
