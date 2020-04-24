#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
	int n,k=0;
	cin>>n;
	a[0]=1;
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		  a[i]=a[i-1]+a[i/2];
		if(i%2==1)
		  a[i]=a[i-1];
	}
	cout<<a[n]<<endl;
	return 0;
}
