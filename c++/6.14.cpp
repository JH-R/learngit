#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
	int n,k=3;
	cin>>n;
	a[1]=1;
	a[2]=1;
	if(n<=2)
	{
		cout<<1<<endl;
		return 0;
	}
	int s=3;
	for(int i=3;i<=n;i++)
	  a[i]=a[i-1]+a[i-2];
	cout<<a[n]<<endl;
	return 0;
}


