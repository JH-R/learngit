#include<bits/stdc++.h>
using namespace std;
int cu=8000,xi=2000,n,least=500000000,sum=0;
int a[101];
int main()
{
	cin>>n;
	for(int r=0;r<n;r++)
	{
		cin>>a[r];
		a[r]=a[r]+a[r-1];
	}
	int k1=0,k2=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i]*8000;
		for(int r=i+1;r<n;r++)
		  sum+=(a[r]-a[i])*2000;
		if(sum<least)
		  least=sum;
		sum=0;
	}
	cout<<least<<endl;
	return 0;
}	
