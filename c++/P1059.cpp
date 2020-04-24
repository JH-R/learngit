#include<bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
	int n,k=0;
	cin>>n;
	for(int i=0;i<n;i++)
	  cin>>a[i];
	for(int x=0;x<n;x++)
	{
		for(int y=0;y<n;y++)
		{
			if(a[y]>a[y+1])
			  swap(a[y],a[y+1]);
		}
	}
	for(int r=0;r<n;r++)
	{
		if(a[r]!=a[r+1])
		  k++;
	}
	cout<<k<<endl;
	for(int m=1;m<=n;m++)
	{
		if(a[m]!=a[m+1])
		  cout<<a[m]<<" ";
	}
	cout<<endl;
	return 0;
}
