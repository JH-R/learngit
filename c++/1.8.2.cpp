#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,i,j,k=0,w,l;
	cin>>n>>i>>j;
	w=i;
	l=j;
	while(k<n)
	{
		k=k+1;
		cout<<"("<<i<<","<<k<<")";
		cout<<" ";
	}
	cout<<endl;
	k=0;
	while(k<n)
	{
		k=k+1;
		cout<<"("<<k<<","<<j<<")";
		cout<<" ";
	}
	cout<<endl;
	while(i>0&&j>0)
	{
		i=i-1;
		j=j-1;
	}
	while(i+1<=n&&j+1<=n)
	{
		cout<<"("<<i+1<<","<<j+1<<")";
		cout<<" ";
		i=i+1;
		j=j+1;
	}
	cout<<endl;
	i=w;
	j=l;
	while(i<=n&&j>0)
	{
		i=i+1;
		j=j-1;
	}
	while(i-1>=0&&j+1<=n)
	{
		if(i-1>0&&j+1>0)
		{
			cout<<"("<<i-1<<","<<j+1<<")";
			cout<<" ";
			i=i-1;
			j=j+1;
		}
		else
		{
			i=i-1;
			j=j+1;
		}
	}
	return 0;
}
	